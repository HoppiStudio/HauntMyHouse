using System;
using UnityEngine;

public class CandleSpawner : MonoBehaviour
{
    public static event Action<Candle> OnCandleSpawned;
    [SerializeField] private GameObject candlePrefab;

    private void Start() => InvokeRepeating(nameof(SpawnNewCandle), 1, 10.0f);

    public void SpawnNewCandle()
    {
        var candleObject = Instantiate(candlePrefab, transform.position, Quaternion.identity);
        candleObject.transform.rotation *= Quaternion.LookRotation(Vector3.up);
        
        var candle = candleObject.GetComponent<Candle>();
        candle.Extinguish();
        OnCandleSpawned?.Invoke(candle);
    }
}
