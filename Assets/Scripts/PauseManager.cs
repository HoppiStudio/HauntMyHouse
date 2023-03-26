using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class PauseManager : MonoBehaviour
{
    public static PauseManager Instance { get; private set; }

    private InputActionManager _inputActionManager;

    public bool Paused { get; private set; } = false;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Debug.LogError($"There should only be one instance of {this}");
            Destroy(this.gameObject);
        }
    }

    private void OnEnable()
    {
        _inputActionManager = InputActionManager.Instance;

        _inputActionManager.playerInputActions.Player.PauseUnpause.performed += DoPauseUnpause;
    }

    private void DoPauseUnpause(InputAction.CallbackContext obj)
    {
        ChangePauseState();
    }

    public event Action<bool> OnPauseStateToggled;
    public void ChangePauseState()
    {
        Paused = !Paused;
        OnPauseStateToggled?.Invoke(Paused);
        GameTimer.Instance.PauseUnpauseTimer(Paused);
    }

    private void OnDisable()
    {
        _inputActionManager.playerInputActions.Player.PauseUnpause.performed -= DoPauseUnpause;
    }
}
