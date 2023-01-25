using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BanishManager : MonoBehaviour
{
    public event Action OnGhostBanished; 
    public static BanishManager Instance { get; private set; }
    public int CandlesPlaced => _candlesOnPodiums;
    public List<Candle> Candles { get; set; }
    
    private List<Podium> _podiums = new();
    private int _candlesOnPodiums;
    private int _candlesLit;
    private bool _ghostsBanished;

    private void OnEnable()
    {
        _podiums.ForEach(podium => podium.OnCandlePlaced += OnCandlePlacedEvent);
        //podiums.ForEach(podium => podium.OnCandleRemoved += OnCandleRemovedEvent);
        //Candles.ForEach(candle => candle.OnCandleLit += OnCandleLitEvent);
        //Candles.ForEach(candle => candle.OnCandleUnlit += OnCandleUnlitEvent);
    }

    private void OnDisable()
    {
        _podiums.ForEach(podium => podium.OnCandlePlaced -= OnCandlePlacedEvent);
        //podiums.ForEach(podium => podium.OnCandleRemoved -= OnCandleRemovedEvent);
        //Candles.ForEach(candle => candle.OnCandleLit -= OnCandleLitEvent);
        //Candles.ForEach(candle => candle.OnCandleUnlit -= OnCandleUnlitEvent);
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
        
        Candles = new List<Candle>();
        Candles.AddRange(FindObjectsOfType<Candle>());
        _podiums.AddRange(FindObjectsOfType<Podium>());
    }

    private void Start()
    {
        if (_podiums.Count == 0)
        {
            Debug.LogError("BanishManager is missing podium references in it's inspector!");
        }
        if (Candles.Count == 0)
        {
            Debug.LogError("BanishManager is missing candle references in it's inspector!");
        }
    }

    private void Update()
    {
        // TODO: Tidy this
        if(_podiums.Count(podium => podium.HasCandle.IsOnFire) >= _podiums.Count && !_ghostsBanished)
        {
            OnGhostBanished?.Invoke();
            Destroy(FindObjectOfType<GhostController>().gameObject);
            _ghostsBanished = true;
        }
    }

    public void OnCandlePlacedEvent()
    { 
        if (_candlesOnPodiums >= 0)
        {
            Debug.Log("Candle placed");
            _candlesOnPodiums++;
        }
    }
    
    public void OnCandleRemovedEvent()
    {
        if (_candlesOnPodiums > 0)
        {
            _candlesOnPodiums--;
        }
    }

    public void OnCandleLitEvent()
    {
        if (_candlesLit >= 0)
        {
            _candlesLit++;
        }
    }

    public void OnCandleUnlitEvent()
    {
        if (_candlesLit > 0)
        {
            _candlesLit--;
        }
    }
}
