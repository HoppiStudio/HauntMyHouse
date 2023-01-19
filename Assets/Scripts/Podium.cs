using UnityEngine;

public class Podium : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.GetComponent<Candle>())
        {
            BanishManager.Instance.OnCandlePlaced();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.GetComponent<Candle>())
        {
            BanishManager.Instance.OnCandleRemoved();
        }
    }
}
