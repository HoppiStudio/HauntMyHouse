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
        DarkBlue,
        Cyan,
        Yellow,
        Orange,
        Purple,
        Pink
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
        public Candle HasCandle { get; private set; }

        [SerializeField] public Candle startingCandle;
        [SerializeField] private PedestalColour currentPedestalColour;

        [Header("Reference Configuration")]
        [SerializeField] private Transform candleHolderPos;
        [SerializeField] private List<SpriteRenderer> flameIconSprite;
        [SerializeField] private List<SpriteRenderer> shapeIconSprites;
        private InputActionManager _inputActionManager;
        private Candle _candleInRange;
        private bool _isCandleInRange;
        private bool _isOccupied;

        private readonly Dictionary<PedestalColour, FlameColour> _pedestalToFlameColoursDict = new()
        {
            {PedestalColour.White, FlameColour.White},
            {PedestalColour.Red, FlameColour.Red},
            {PedestalColour.Green, FlameColour.Green},
            {PedestalColour.DarkBlue, FlameColour.DarkBlue},
            {PedestalColour.Cyan, FlameColour.Cyan},
            {PedestalColour.Yellow, FlameColour.Yellow},
            {PedestalColour.Orange, FlameColour.Orange},
            {PedestalColour.Purple, FlameColour.Purple},
            {PedestalColour.Pink, FlameColour.Pink}
        };

        private readonly Dictionary<PedestalColour, Color> _flameIconColourDict = new()
        {
            {PedestalColour.White, Color.white},
            {PedestalColour.Red, Color.red},
            {PedestalColour.Green, Color.green},
            {PedestalColour.DarkBlue, Color.blue},
            {PedestalColour.Cyan, Color.cyan},
            {PedestalColour.Yellow, Color.yellow},
            {PedestalColour.Orange, new Color(1,0.5f,0)},
            {PedestalColour.Purple, new Color(0.5f, 0, 1)},
            {PedestalColour.Pink, Color.magenta}
        };

        private void OnDisable()
        {
            _inputActionManager.playerInputActions.Player.GrabLeft.canceled -= DoPlaceCandle;
            _inputActionManager.playerInputActions.Player.GrabRight.canceled -= DoPlaceCandle;
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
            _inputActionManager.playerInputActions.Player.GrabLeft.canceled += DoPlaceCandle;
            _inputActionManager.playerInputActions.Player.GrabRight.canceled += DoPlaceCandle;
        }
    
        private void OnTriggerStay(Collider other)
        {
            if(other.GetComponent<Candle>() != null && !_isOccupied)
            {
                var candle = other.GetComponent<Candle>();
                if (candle.GetFlameColour() == _pedestalToFlameColoursDict[currentPedestalColour]) 
                {
                    candle.Highlight(new Color(0,1,0,0.85f));
                    _candleInRange = candle;
                    _isCandleInRange = true;
                }
                else
                {
                    candle.Highlight(new Color(1,0,0,0.85f));
                }
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if(other.GetComponent<Candle>() != null)
            {
                var candle = other.GetComponent<Candle>();
                candle.Unhighlight();
                _isCandleInRange = false;
            }
        }

        private void PlaceCandleOnPedestal()
        {
            flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[currentPedestalColour]);
            _candleInRange.Unhighlight();
            _candleInRange.transform.position = candleHolderPos.position;
            _candleInRange.transform.rotation = Quaternion.LookRotation(Vector3.left);
            _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            Destroy(_candleInRange.GetComponent<XRGrabInteractable>());
            OnCandlePlaced?.Invoke();
            HasCandle = _candleInRange;
            _isOccupied = true;
        }

        private void RemoveCandleFromPedestal()
        {
            if (HasCandle == null)
            {
                return;
            }
            Destroy(HasCandle.gameObject);
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