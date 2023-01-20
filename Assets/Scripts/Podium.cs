using System;
using UnityEngine;

public class Podium : MonoBehaviour
{
    public event Action OnCandlePlaced;
    public event Action OnCandleRemoved;
    
    private bool _isOccupied;

    private void OnTriggerStay(Collider other)
    {
        if(other.GetComponent<Candle>() != null && !_isOccupied)
        {
            var candle = other.GetComponent<Candle>();
            candle.GetComponent<MeshRenderer>().material.color = Color.green;
            
            if (OVRInput.GetUp(OVRInput.Button.Any))
            {
                candle.GetComponent<MeshRenderer>().material.color = candle.originalColour;
                candle.transform.position = transform.position + Vector3.up * 1.04f;
                candle.transform.rotation = transform.rotation * Quaternion.LookRotation(Vector3.up);
                candle.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
                OnCandlePlaced?.Invoke();
                _isOccupied = true;
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.GetComponent<Candle>() != null)
        {
            var candle = other.GetComponent<Candle>();
            candle.GetComponent<MeshRenderer>().material.color = candle.originalColour;

            if (_isOccupied)
            {
                /*var candle = other.GetComponent<Candle>();
                 candle.transform.position = transform.position;
                 OnCandleRemoved?.Invoke();
                 _isOccupied = false;*/
            }
        }
    }
}
