using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PauseManager : MonoBehaviour
{
    public static PauseManager Instance { get; private set; }

    private InputActionManager inputActionManager;

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
        inputActionManager = InputActionManager.Instance;

        inputActionManager.playerInputActions.Player.PauseUnpause.performed += DoPauseUnpause;
    }

    private void DoPauseUnpause(InputAction.CallbackContext obj)
    {
        ChangePauseState();
    }

    public event Action<bool> OnPauseStateChanged;
    public void ChangePauseState()
    {
        Paused = !Paused;
        Time.timeScale = Paused ? 0 : 1;
        OnPauseStateChanged?.Invoke(Paused);
    }

    private void OnDisable()
    {
        inputActionManager.playerInputActions.Player.PauseUnpause.performed -= DoPauseUnpause;
    }
}
