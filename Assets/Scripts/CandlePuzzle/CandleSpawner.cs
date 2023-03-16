using System;
using UnityEngine;

namespace CandlePuzzle
{
    public class CandleSpawner : MonoBehaviour
    {
        public static event Action<Candle> OnCandleSpawned;
    
        [SerializeField] private GameObject candlePrefab;
        [SerializeField] private PushableButton pushableButton;

        private void OnEnable() => pushableButton.OnPushed += SpawnNewCandle;
        private void OnDisable() => pushableButton.OnPushed -= SpawnNewCandle;
        private void Start() => SpawnNewCandle();

        private void SpawnNewCandle()
        {
            var candleObject = Instantiate(candlePrefab, transform.position, Quaternion.identity);
            candleObject.transform.rotation *= Quaternion.LookRotation(Vector3.up);
        
            var candle = candleObject.GetComponent<Candle>();
            candle.Extinguish();
            OnCandleSpawned?.Invoke(candle);
        }
    }
}
