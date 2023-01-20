using System;
using UnityEngine;

public class Podium : MonoBehaviour
{
    public event Action OnCandlePlaced;
    public event Action OnCandleRemoved;

    private Candle _candleInRange;
    private bool _isCandleInRange;
    private bool _isOccupied;

    private void Update()
    {
        if (_isCandleInRange && !_isOccupied)
        {
            if (OVRInput.GetUp(OVRInput.Button.Any))
            {
                _candleInRange.GetComponent<MeshRenderer>().material.color = _candleInRange.originalColour;
                _candleInRange.transform.position = transform.position + Vector3.up * 1.04f;
                _candleInRange.transform.rotation = transform.rotation * Quaternion.LookRotation(Vector3.up);
                _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
                OnCandlePlaced?.Invoke();
                _isOccupied = true;
            }
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if(other.GetComponent<Candle>() != null && !_isOccupied)
        {
            var candle = other.GetComponent<Candle>();
            candle.GetComponent<MeshRenderer>().material.color = Color.green;
            _candleInRange = candle;
            _isCandleInRange = true;
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
            _isCandleInRange = false;
        }
    }
}
