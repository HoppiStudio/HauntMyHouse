using System;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;

public class Matchbox : MonoBehaviour
{
    private InputActionManager inputActionManager;

    [SerializeField] private TMP_Text debugText;
    private Matchstick _matchstick;
    private Vector3 _startPosition;
    private bool _isCollidingWithMatchstick;

    private void Start()
    {
        debugText.text = "";
        _startPosition = transform.position;
    }

    private void OnEnable()
    {
        inputActionManager = InputActionManager.Instance;

        inputActionManager.playerInputActions.Player.Interact.performed += DoIgnite;
    }

    private void OnDisable()
    {
        inputActionManager.playerInputActions.Player.Interact.performed -= DoIgnite;
    }

    private void DoIgnite(InputAction.CallbackContext obj)
    {
        if(_isCollidingWithMatchstick)
        {
            _matchstick.Ignite();
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
                debugText.text = "Press A to light the match";
                _isCollidingWithMatchstick = true;
                _matchstick.SetFlameColour(FlameColour.Orange);
            }
        }
    }
    
    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Matchstick>() != null)
        {
            debugText.text = "";
            _matchstick = null;
            _isCollidingWithMatchstick = false;
        }
    }
}