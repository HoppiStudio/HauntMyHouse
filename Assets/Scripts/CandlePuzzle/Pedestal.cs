using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

namespace CandlePuzzle
{
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
        public Candle PlacedCandle { get; private set; }

        [SerializeField] public Candle startingCandle;
        [SerializeField] private PedestalColour pedestalColour;

        [Header("Reference Configuration")]
        [SerializeField] private Transform candleHolderPos;
        [SerializeField] private List<SpriteRenderer> flameIconSprite;
        [SerializeField] private List<SpriteRenderer> shapeIconSprites;
        private InputActionManager _inputActionManager;
        private Candle _candleInRange;
        private bool _isCandleInRange;
        private bool _isHandInRange;

        private void OnDisable()
        {
            _inputActionManager.playerInputActions.Player.GrabLeft.performed -= DoGrabAction;
            _inputActionManager.playerInputActions.Player.GrabLeft.canceled -= DoGrabActionReleased;
            _inputActionManager.playerInputActions.Player.GrabRight.performed -= DoGrabAction;
            _inputActionManager.playerInputActions.Player.GrabRight.canceled -= DoGrabActionReleased;
        }

        private void OnValidate() => flameIconSprite?.ForEach(sprite => sprite.color = ColourMappingUtility.GetColorFromPedestalColour(pedestalColour));

        private void Start()
        {
            if (startingCandle != null)
            {
                startingCandle.Ignite();
                _candleInRange = startingCandle;
                PlaceCandleOnPedestal();
            }
        
            _inputActionManager = InputActionManager.Instance;
            _inputActionManager.playerInputActions.Player.GrabLeft.performed += DoGrabAction;
            _inputActionManager.playerInputActions.Player.GrabLeft.canceled += DoGrabActionReleased;
            _inputActionManager.playerInputActions.Player.GrabRight.performed += DoGrabAction;
            _inputActionManager.playerInputActions.Player.GrabRight.canceled += DoGrabActionReleased;
        }

        private void OnTriggerStay(Collider other)
        {
            // if candle held over empty pedestal, highlight it
            if(other.GetComponent<Candle>() != null && !PlacedCandle)
            {
                var candle = other.GetComponent<Candle>();
                candle.Highlight(new Color(0,1,0,0.85f));
                _candleInRange = candle;
                _isCandleInRange = true;
            }
            
            // if XR controller held over pedestal that has a candle, highlight it
            if (other.GetComponent<XRController>() != null)
            {
                if (PlacedCandle != null)
                {
                    PlacedCandle.Highlight(new Color(0,1,0,0.85f));
                }
                _isHandInRange = true;
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
            
            if(other.GetComponent<XRController>() != null)
            {
                if (PlacedCandle != null)
                {
                    PlacedCandle.Unhighlight();
                }
                _isHandInRange = false;
            }
        }
        
        private void DoGrabAction(InputAction.CallbackContext ctx)
        {
            // If pedestal has a candle placed on it and player tries to grab it, pick it up 
            if (_isHandInRange && PlacedCandle)
            {
                RemoveCandleFromPedestal();
            }
        }

        private void DoGrabActionReleased(InputAction.CallbackContext ctx)
        {
            if(_isCandleInRange && !PlacedCandle)
            {
                PlaceCandleOnPedestal();
            }
        }

        private void PlaceCandleOnPedestal()
        {
            //flameIconSprite?.ForEach(sprite => sprite.color = _pedestalColourToColorDict[pedestalColour]);
            flameIconSprite?.ForEach(sprite => sprite.color = ColourMappingUtility.GetColorFromFlameColour(_candleInRange.GetFlameColour()));
            _candleInRange.Unhighlight();
            _candleInRange.transform.position = candleHolderPos.position;
            _candleInRange.transform.rotation = Quaternion.LookRotation(Vector3.left);
            _candleInRange.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeAll;
            _candleInRange.GetComponent<XRGrabInteractable>().enabled = false;
            OnCandlePlaced?.Invoke();
            PlacedCandle = _candleInRange;
        }

        private void RemoveCandleFromPedestal()
        {
            PlacedCandle.GetComponent<XRGrabInteractable>().enabled = true;
            PlacedCandle.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
            PlacedCandle = null;
            flameIconSprite.ForEach(sprite => sprite.color = Color.white);
            OnCandleRemoved?.Invoke();
        }
        

        public void SetPedestalShapeIcon(ShapeIcon shapeIcon)
        {
            shapeIconSprites.ForEach(sprite => sprite.gameObject.SetActive(false));
            if ((int) shapeIcon > 4) { return; }
            shapeIconSprites[(int)shapeIcon].gameObject.SetActive(true);
        }

        public void SetPedestalColour(PedestalColour colour)
        {
            pedestalColour = colour;
            //flameIconSprite?.ForEach(sprite => sprite.color = _flameIconColourDict[this.pedestalColour]);
        }

        public bool HasCorrectCandle()
        {
            return PlacedCandle.GetFlameColour() == ColourMappingUtility.GetFlameColourFromPedestalColour(pedestalColour);
        }
    }
}