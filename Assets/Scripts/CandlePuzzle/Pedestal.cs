using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

namespace CandlePuzzle
{
    public enum PedestalColour
    {
        White,
        Red,
        Green,
        Blue,
        Orange,
        Purple,
        Yellow
    }

    public enum ShapeIcon
    {
        Square = 0,
        Triangle = 1, 
        Pentagon = 2,
        Star = 3,
        Circle = 4,
        None = 5
    }

    public class Pedestal : MonoBehaviour
    {
        public event Action OnCandlePlaced;
        public event Action OnCandleRemoved;
        public Candle HasCandle => _placedCandle;

        [SerializeField] public Candle startingCandle;
        [SerializeField] private PedestalColour currentPedestalColour;

        [Header("Reference Configuration")]
        [SerializeField] private Transform candleHolderPos;
        [SerializeField] private List<SpriteRenderer> flameIconSprite;
        [SerializeField] private List<SpriteRenderer> shapeIconSprites;
    
        private InputActionManager _inputActionManager;
        private Candle _candleInRange;
        private Candle _placedCandle;
        private bool _isCandleInRange;
        private bool _isOccupied;

        private readonly Dictionary<PedestalColour, FlameColour> _pedestalToFlameColoursDict = new()
        {
            {PedestalColour.White, FlameColour.White},
            {PedestalColour.Red, FlameColour.Red},
            {PedestalColour.Green, FlameColour.Green},
            {PedestalColour.Blue, FlameColour.Blue},
            {PedestalColour.Orange, FlameColour.Orange},
            {PedestalColour.Purple, FlameColour.Purple},
            {PedestalColour.Yellow, FlameColour.Yellow}
        };

        private readonly Dictionary<PedestalColour, Color> _flameIconColourDict = new()
        {
            {PedestalColour.White, Color.white},
            {PedestalColour.Red, Color.red},
            {PedestalColour.Green, Color.green},
            {PedestalColour.Blue, Color.cyan},
            {PedestalColour.Orange, new Color(1,0.5f,0)},
            {PedestalColour.Purple, new Color(0.5f, 0, 1)},
            {PedestalColour.Yellow, Color.yellow}
        };

        private void OnDisable()
        {
            _inputActionManager.playerInputActions.Player.Grab.canceled -= DoPlaceCandle;
        }
    
        private void DoPlaceCandle(InputAction.CallbackContext obj)
        {
            if(_isCandleInRange && !_isOccupied)
            {
                PlaceCandleOnPedestal();
            }
            else if (_isCandleInRange && _isOccupied)
            {
                RemoveCandleFromPedestal();
                PlaceCandleOnPedestal();
            }
        }
    
        private void OnValidate() => flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[currentPedestalColour]);

        private void Start()
        {
            if (startingCandle != null)
            {
                startingCandle.Ignite();
                _candleInRange = startingCandle;
                PlaceCandleOnPedestal();
            }
        
            _inputActionManager = InputActionManager.Instance;
            _inputActionManager.playerInputActions.Player.Grab.canceled += DoPlaceCandle;
        }
    
        private void OnTriggerStay(Collider other)
        {
            if(other.GetComponent<Candle>() != null && !_isOccupied)
            {
                var candle = other.GetComponent<Candle>();
                if (candle.GetFlameColour() == _pedestalToFlameColoursDict[currentPedestalColour]) 
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

        private void PlaceCandleOnPedestal()
        {
            flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[currentPedestalColour]);
            _candleInRange.GetComponent<MeshRenderer>().material.color = _candleInRange.GetOriginalMaterialColour();
            _candleInRange.transform.position = candleHolderPos.position;
            _candleInRange.transform.rotation = transform.rotation;
            _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            Destroy(_candleInRange.GetComponent<XRGrabInteractable>());
            OnCandlePlaced?.Invoke();
            _placedCandle = _candleInRange;
            _isOccupied = true;
        }

        private void RemoveCandleFromPedestal()
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

        public void SetPedestalShapeIcon(ShapeIcon shapeIcon)
        {
            shapeIconSprites.ForEach(sprite => sprite.gameObject.SetActive(false));
            if ((int) shapeIcon > 4) { return; }
            shapeIconSprites[(int)shapeIcon].gameObject.SetActive(true);
        }

        public void SetPedestalColour(PedestalColour pedestalColour)
        {
            currentPedestalColour = pedestalColour;
            //flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[currentPedestalColour]);
        }

        public PedestalColour GetPedestalColour()
        {
            return currentPedestalColour;
        }
    }
}