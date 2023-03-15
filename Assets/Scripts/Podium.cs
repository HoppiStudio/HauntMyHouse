using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Serialization;
using UnityEngine.XR.Interaction.Toolkit;

public enum PodiumColour
{
    White,
    Red,
    Green,
    Blue,
    Orange,
    Purple,
    Yellow
}

public class Podium : MonoBehaviour
{
    public event Action OnCandlePlaced;
    public event Action OnCandleRemoved;
    public Candle HasCandle => _placedCandle;

    [FormerlySerializedAs("placedCandle")] [SerializeField] public Candle startingCandle;
    [FormerlySerializedAs("currentPodiumColour")] [SerializeField] private PodiumColour _currentPodiumColour;

    [Header("Reference Configuration")]
    [SerializeField] private Transform candleHolderPos;
    [SerializeField] private List<SpriteRenderer> flameIconSprite;
    [SerializeField] private List<SpriteRenderer> shapeIconSprites;
    
    private InputActionManager _inputActionManager;
    private Candle _candleInRange;
    private Candle _placedCandle;
    private bool _isCandleInRange;
    private bool _isOccupied;

    private readonly Dictionary<PodiumColour, FlameColour> _podiumToFlameColoursDict = new()
    {
        {PodiumColour.White, FlameColour.White},
        {PodiumColour.Red, FlameColour.Red},
        {PodiumColour.Green, FlameColour.Green},
        {PodiumColour.Blue, FlameColour.Blue},
        {PodiumColour.Orange, FlameColour.Orange},
        {PodiumColour.Purple, FlameColour.Purple},
        {PodiumColour.Yellow, FlameColour.Yellow}
    };

    private readonly Dictionary<PodiumColour, Color> _flameIconColourDict = new()
    {
        {PodiumColour.White, Color.white},
        {PodiumColour.Red, Color.red},
        {PodiumColour.Green, Color.green},
        {PodiumColour.Blue, Color.cyan},
        {PodiumColour.Orange, new Color(1,0.5f,0)},
        {PodiumColour.Purple, new Color(0.5f, 0, 1)},
        {PodiumColour.Yellow, Color.yellow}
    };

    private void OnDisable()
    {
        _inputActionManager.playerInputActions.Player.Grab.canceled -= DoPlaceCandle;
    }
    
    private void DoPlaceCandle(InputAction.CallbackContext obj)
    {
        if(_isCandleInRange && !_isOccupied)
        {
            PlaceCandleOnPodium();
        }
        else if (_isCandleInRange && _isOccupied)
        {
           RemoveCandleFromPodium();
           PlaceCandleOnPodium();
        }
    }
    
    private void OnValidate() => flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[_currentPodiumColour]);

    private void Start()
    {
        if (startingCandle != null)
        {
            startingCandle.Ignite();
            _candleInRange = startingCandle;
            PlaceCandleOnPodium();
        }
        
        _inputActionManager = InputActionManager.Instance;
        _inputActionManager.playerInputActions.Player.Grab.canceled += DoPlaceCandle;
    }
    
    private void OnTriggerStay(Collider other)
    {
        // If podium comes into contact with a candle and podium isn't occupied
        if(other.GetComponent<Candle>() != null && !_isOccupied)
        {
            var candle = other.GetComponent<Candle>();
            if (candle.GetFlameColour() == _podiumToFlameColoursDict[_currentPodiumColour]) 
            {
                candle.GetComponent<MeshRenderer>().material.color = Color.green;
                _candleInRange = candle;
                _isCandleInRange = true;
            }
            else
            {
                candle.GetComponent<MeshRenderer>().material.color = Color.red;
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.GetComponent<Candle>() != null)
        {
            var candle = other.GetComponent<Candle>();
            candle.GetComponent<MeshRenderer>().material.color = candle.GetOriginalMaterialColour();
            _isCandleInRange = false;
        }
    }

    private void PlaceCandleOnPodium()
    {
        _candleInRange.GetComponent<MeshRenderer>().material.color = _candleInRange.GetOriginalMaterialColour();
        _candleInRange.transform.position = candleHolderPos.position;
        _candleInRange.transform.rotation = transform.rotation;
        _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
        Destroy(_candleInRange.GetComponent<XRGrabInteractable>());
        OnCandlePlaced?.Invoke();
        _placedCandle = _candleInRange;
        _isOccupied = true;
    }

    private void RemoveCandleFromPodium()
    {
        if (_placedCandle == null)
        {
            return;
        }
        Destroy(_placedCandle.gameObject);
        OnCandleRemoved?.Invoke();
        startingCandle = null;
        _isOccupied = false;
        /*_placedCandle.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
        _placedCandle.AddComponent<XRGrabInteractable>();
        OnCandleRemoved?.Invoke();
        startingCandle = null;
        _isOccupied = false;*/
    }

    public void SetPodiumShapeIcon(int shapeIndex)
    {
        // Square(0), Triangle(1), Pentagon(2), Star(3), Circle(4)
        shapeIconSprites.ForEach(sprite => sprite.gameObject.SetActive(false));
        if (shapeIndex > 4) { return; }
        shapeIconSprites[shapeIndex].gameObject.SetActive(true);
    }

    public void SetPodiumColour(PodiumColour podiumColour)
    {
        _currentPodiumColour = podiumColour;
        flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[_currentPodiumColour]);
    }

    public PodiumColour GetPodiumColour()
    {
        return _currentPodiumColour;
    }
}
