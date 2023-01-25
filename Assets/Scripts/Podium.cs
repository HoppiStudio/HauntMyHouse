using System;
using System.Collections.Generic;
using UnityEngine;

public enum PodiumColour
{
    White,
    Red,
    Green,
    Blue,
    Orange,
    Purple
}

public class Podium : MonoBehaviour
{
    public event Action OnCandlePlaced;
    public event Action OnCandleRemoved;

    [SerializeField] private PodiumColour podiumColour;
    [SerializeField] private List<SpriteRenderer> flameIconSprite;
    private Candle _candleInRange;
    private float _groundOffset;
    private bool _isCandleInRange;
    private bool _isOccupied;

    private void OnValidate()
    {
        switch (podiumColour)
        {
            case PodiumColour.White:
                flameIconSprite.ForEach(sprite => sprite.color = Color.white);
                break;
            case PodiumColour.Red:
                flameIconSprite.ForEach(sprite => sprite.color = Color.red);
                break;
            case PodiumColour.Green:
                flameIconSprite.ForEach(sprite => sprite.color = Color.green);
                break;
            case PodiumColour.Blue:
                flameIconSprite.ForEach(sprite => sprite.color = Color.cyan);
                break;
            case PodiumColour.Orange:
                flameIconSprite.ForEach(sprite => sprite.color = new Color(1,0.5f,0));
                break;
            case PodiumColour.Purple:
                flameIconSprite.ForEach(sprite => sprite.color = new Color(0.5f, 0, 1));
                break;
            default:
                flameIconSprite.ForEach(sprite => sprite.color = Color.white);
                break;
        }
    }

    private void Start() => _groundOffset = 1.06f;

    private void Update()
    {
        if (_isCandleInRange && !_isOccupied)
        {
            if (OVRInput.GetUp(OVRInput.Button.Any))
            {
                _candleInRange.GetComponent<MeshRenderer>().material.color = _candleInRange.originalCandleColour;
                _candleInRange.transform.position = transform.position + Vector3.up * _groundOffset;
                _candleInRange.transform.rotation = transform.rotation;
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
            candle.GetComponent<MeshRenderer>().material.color = candle.originalCandleColour;

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
