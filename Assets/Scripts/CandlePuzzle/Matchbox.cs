using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace CandlePuzzle
{
    public class Matchbox : MonoBehaviour
    {
        private AudioSource _matchStrikeSound;
        private InputActionManager _inputActionManager;
        private Matchstick _matchstick;
        private Vector3 _startPosition;
        private bool _isCollidingWithMatchstick;

        private void Awake() => _matchStrikeSound = GetComponent<AudioSource>();

        private void Start()
        {
            _startPosition = transform.position;
            _inputActionManager = InputActionManager.Instance;
            _inputActionManager.playerInputActions.Player.Interact.performed += DoIgnite;
        }

        private void OnDisable()
        {
            _inputActionManager.playerInputActions.Player.Interact.performed -= DoIgnite;
        }

        private void DoIgnite(InputAction.CallbackContext obj)
        {
            if(_isCollidingWithMatchstick)
            {
                _matchstick.Ignite();
                _matchStrikeSound.Play();
            }
        }

        private void Update()
        {
            if (transform.position.y <= 0.5f)
            {
                transform.position = _startPosition;
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.GetComponent<Matchstick>() != null)
            {
                _matchstick = other.GetComponent<Matchstick>();
                if (!_matchstick.IsOnFire())
                {
                    _isCollidingWithMatchstick = true;
                    _matchstick.SetFlameColour(FlameColour.Orange);
                }
            }
        }
    
        private void OnTriggerExit(Collider other)
        {
            if (other.GetComponent<Matchstick>() != null)
            {
                _matchstick = null;
                _isCollidingWithMatchstick = false;
            }
        }
    }
}