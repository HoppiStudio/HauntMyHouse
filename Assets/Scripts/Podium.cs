using System;
using System.Collections.Generic;
using OculusSampleFramework;
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
    //public event Action OnCandleRemoved;
    public Candle HasCandle => _candleInRange;

    [SerializeField] private Candle placedCandle;
    [SerializeField] private PodiumColour currentPodiumColour;
    [SerializeField] private List<SpriteRenderer> flameIconSprite;
    private Candle _candleInRange;
    private float _groundOffset;
    private bool _isCandleInRange;
    private bool _isOccupied;

    private readonly Dictionary<PodiumColour, Color> _flameIconColourDict = new()
    {
        {PodiumColour.White, Color.white},
        {PodiumColour.Red, Color.red},
        {PodiumColour.Green, Color.green},
        {PodiumColour.Blue, Color.cyan},
        {PodiumColour.Orange, new Color(1,0.5f,0)},
        {PodiumColour.Purple, new Color(0.5f, 0, 1)}
    };

    private void OnValidate()
    {
        flameIconSprite.ForEach(sprite => sprite.color = _flameIconColourDict[currentPodiumColour]);
    }

    private void Start()
    {
        _groundOffset = 1.06f;
        
        if (placedCandle != null)
        {
            placedCandle.Ignite();
            _candleInRange = placedCandle;
            PlaceCandleOnPodium();
        }
    }

    private void Update()
    {
        if (_isCandleInRange && !_isOccupied)
        {
            if (OVRInput.GetUp(OVRInput.Button.PrimaryHandTrigger) || OVRInput.GetUp(OVRInput.Button.SecondaryHandTrigger))
            {
                PlaceCandleOnPodium();
            }
        }
    }

    private void OnTriggerStay(Collider other)
    {
        // If podiums comes into contact with a candle and podium is not occupied
        if(other.GetComponent<Candle>() != null && !_isOccupied)
        {
            if (other.GetComponent<Candle>().FlameColour == (FlameColour) currentPodiumColour) // TODO: Tidy up
            {
                var candle = other.GetComponent<Candle>();
                candle.GetComponent<MeshRenderer>().material.color = Color.green;
                _candleInRange = candle;
                _isCandleInRange = true;
            }
            else
            {
                var candle = other.GetComponent<Candle>();
                candle.GetComponent<MeshRenderer>().material.color = Color.red;
            }
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
    
    private void PlaceCandleOnPodium()
    {
        _candleInRange.GetComponent<MeshRenderer>().material.color = _candleInRange.originalCandleColour;
        _candleInRange.transform.position = transform.position + Vector3.up * _groundOffset;
        _candleInRange.transform.rotation = transform.rotation;
        _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
        Destroy(_candleInRange.GetComponent<DistanceGrabbable>());
        OnCandlePlaced?.Invoke();
        placedCandle = _candleInRange;
        _isOccupied = true;
    }
}
