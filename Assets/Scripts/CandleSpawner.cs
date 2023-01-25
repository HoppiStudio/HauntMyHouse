using UnityEngine;

public class CandleSpawner : MonoBehaviour
{
    [SerializeField] private GameObject candlePrefab;

    private void Start()
    {
        InvokeRepeating(nameof(SpawnNewCandle), 1, 10.0f);
    }

    public void SpawnNewCandle()
    {
        var candle = Instantiate(candlePrefab, transform.position, Quaternion.identity);
        candle.transform.rotation *= Quaternion.LookRotation(Vector3.up);
        BanishManager.Instance.Candles.Add(candle.GetComponent<Candle>());
    }
}
