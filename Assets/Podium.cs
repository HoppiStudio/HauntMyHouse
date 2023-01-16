using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Podium : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Candle"))
        {
            BanishManager.Instance.OnCandlePlaced();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Candle"))
        {
            BanishManager.Instance.OnCandleRemoved();
        }
    }
}
