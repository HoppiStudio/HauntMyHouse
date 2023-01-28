using TMPro;
using UnityEngine;

public class CandlesPlacedUi : MonoBehaviour
{
    private TMP_Text _candlesPlacedText;
    [SerializeField] private BanishManager banishManager;

    private void OnEnable() => banishManager.OnCandlesPlacedCountChange += UpdateCandlesPlacedTextEvent;
    private void OnDisable() => banishManager.OnCandlesPlacedCountChange -= UpdateCandlesPlacedTextEvent;

    private void Awake()
    {
        _candlesPlacedText = GetComponent<TMP_Text>();
        if (banishManager == null)
        {
            Debug.LogError("CandlesPlacedUi inspector is missing references!", this);
        }
    }

    private void Start() => _candlesPlacedText.text = "Candles Placed: <color=yellow>0</color>";

    private void UpdateCandlesPlacedTextEvent(int counter)
    {
        _candlesPlacedText.text = $"Candles Placed: <color=yellow>{counter}</color>";
    }
}
