using TMPro;
using UnityEngine;

public class CandlesPlacedUi : MonoBehaviour
{
    private TMP_Text _candlesPlacedText;

    private void Awake()
    {
        _candlesPlacedText = GetComponent<TMP_Text>();
    }

    private void Start() => _candlesPlacedText.text = "Candles Placed: <color=yellow>0</color>";

    private void Update()
    {
        _candlesPlacedText.text = $"Candles Placed: <color=yellow>{BanishManager.Instance.CandlesPlaced}</color>";
    }
}
