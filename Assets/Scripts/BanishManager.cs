using System;
using System.Collections.Generic;
using UnityEngine;

public class BanishManager : MonoBehaviour
{
    public event Action OnGhostBanished; 
    public static BanishManager Instance { get; private set; }
    public int CandlesPlaced => _candlesOnPodiums;
    public int CandlesLit => _candlesLit;

    [SerializeField] private List<Podium> podiums;
    [SerializeField] private List<Candle> candles;
    private int _candlesOnPodiums;
    private int _candlesLit;

    private void OnEnable()
    {
        podiums.ForEach(podium => podium.OnCandlePlaced += OnCandlePlacedEvent);
        podiums.ForEach(podium => podium.OnCandleRemoved += OnCandleRemovedEvent);
        candles.ForEach(candle => candle.OnCandleLit += OnCandleLitEvent);
        candles.ForEach(candle => candle.OnCandleUnlit += OnCandleUnlitEvent);
    }

    private void OnDisable()
    {
        podiums.ForEach(podium => podium.OnCandlePlaced -= OnCandlePlacedEvent);
        podiums.ForEach(podium => podium.OnCandleRemoved -= OnCandleRemovedEvent);
        candles.ForEach(candle => candle.OnCandleLit -= OnCandleLitEvent);
        candles.ForEach(candle => candle.OnCandleUnlit -= OnCandleUnlitEvent);
    }

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(this);
            Debug.LogWarning($"There should only be one instance of {GetType()} in the scene");
        }
    }

    private void Start()
    {
        if (podiums.Count == 0)
        {
            Debug.LogError("BanishManager is missing podium references in it's inspector!");
        }
        if (candles.Count == 0)
        {
            Debug.LogError("BanishManager is missing candle references in it's inspector!");
        }
    }

    public void OnCandlePlacedEvent()
    { 
        if (_candlesOnPodiums >= 0)
        {
            Debug.Log("Candle placed");
            _candlesOnPodiums++;
        }

        if(_candlesOnPodiums == candles.Count && _candlesLit == candles.Count)
        {
            OnGhostBanished?.Invoke();
            Destroy(FindObjectOfType<GhostController>().gameObject);
        }
    }
    
    public void OnCandleRemovedEvent()
    {
        if (_candlesOnPodiums > 0)
        {
            _candlesOnPodiums--;
        }
    }
    
    private void OnCandleLitEvent()
    {
        if (_candlesLit >= 0)
        {
            _candlesLit++;
        }
        
        if(_candlesOnPodiums == candles.Count && _candlesLit == candles.Count)
        {
            OnGhostBanished?.Invoke();
            Destroy(FindObjectOfType<GhostController>().gameObject);
        }
    }

    private void OnCandleUnlitEvent()
    {
        if (_candlesLit > 0)
        {
            _candlesLit--;
        }
    }
}
