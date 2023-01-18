using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BanishManager : MonoBehaviour
{
    [SerializeField] private List<GameObject> candles = new List<GameObject>();

    [SerializeField] private int numberOfCandles = 0;
    [SerializeField] private int candlesOnPodiums = 0;

    static public BanishManager Instance { get; private set; }

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(this);
            Debug.LogWarning($"There should only be one instance of {this.GetType()} in the scene");
        }
    }

    void Start()
    {
        numberOfCandles = candles.Count;
    }

    public void OnCandlePlaced()
    {
        candlesOnPodiums++;
        Debug.Log("Candle placed");

        if(candlesOnPodiums == numberOfCandles)
        {
            Debug.Log("All candles placed");
        }
    }

    public void OnCandleRemoved()
    {
        candlesOnPodiums--;
        Debug.Log("Candle removed");
    }

    void Update()
    {
        
    }
}
