using System.Linq;
using TMPro;
using UnityEngine;

public class CandlesLitUi : MonoBehaviour
{
    private TMP_Text _candlesLitText;

    private void Awake() => _candlesLitText = GetComponent<TMP_Text>();
    private void Start() => _candlesLitText.text = "Candles Lit: <color=yellow>0</color>";
    
    private void Update()
    {
        _candlesLitText.text = $"Candles Lit: <color=yellow>{FindObjectsOfType<Candle>().Count(candle => candle.IsOnFire())}</color>"; // TODO: Tidy up
        //_candlesLitText.text = $"Candles Lit: <color=yellow>{BanishManager.Instance.CandlesLit}</color>";
    }
}
