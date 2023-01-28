using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BanishManager : MonoBehaviour
{
    public event Action OnGhostBanished;
    public event Action<int> OnCandlesPlacedCountChange;

    private List<Candle> _candles = new();
    private List<Podium> _podiums = new();
    private int _candlesOnPodiums;
    private int _candlesLit;
    private bool _ghostsBanished;

    private void OnEnable()
    {
        _podiums.ForEach(podium => podium.OnCandlePlaced += OnCandlePlacedIncrementCounterEvent);
        CandleSpawner.OnCandleSpawned += OnCandleSpawnedAddCandleEvent;
    }

    private void OnDisable()
    {
        _podiums.ForEach(podium => podium.OnCandlePlaced -= OnCandlePlacedIncrementCounterEvent);
        _candles.ForEach(candle => candle.OnCandleLit -= OnCandleLitIncrementCounterEvent);
        CandleSpawner.OnCandleSpawned -= OnCandleSpawnedAddCandleEvent;
    }

    private void Awake()
    {
        _candles.AddRange(FindObjectsOfType<Candle>());
        _podiums.AddRange(FindObjectsOfType<Podium>());
    }

    private void Update()
    {
        if(_podiums.Count(podium => podium.HasCandle != null && podium.HasCandle.IsOnFire) >= _podiums.Count && !_ghostsBanished)
        {
            OnGhostBanished?.Invoke();
            Destroy(FindObjectOfType<GhostController>().gameObject);
            _ghostsBanished = true;
        }
    }

    private void OnCandleSpawnedAddCandleEvent(Candle candle)
    {
        _candles.Add(candle);
        candle.OnCandleLit += OnCandleLitIncrementCounterEvent;
    }

    private void OnCandlePlacedIncrementCounterEvent()
    {
        if (_candlesOnPodiums >= 0)
        {
            _candlesOnPodiums++;
            OnCandlesPlacedCountChange?.Invoke(_candlesOnPodiums);
        }
    }

    private void OnCandleRemovedDecrementCounterEvent()
    {
        if (_candlesOnPodiums > 0)
        {
            _candlesOnPodiums--;
            OnCandlesPlacedCountChange?.Invoke(_candlesOnPodiums);
        }
    }

    private void OnCandleLitIncrementCounterEvent()
    {
        if (_candlesLit >= 0)
        {
            _candlesLit++;
        }
    }

    private void OnCandleUnlitDecrementCounterEvent()
    {
        if (_candlesLit > 0)
        {
            _candlesLit--;
        }
    }
}
