using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputActionManager : MonoBehaviour
{
    public InputActionControls playerInputActions;

    public static InputActionManager Instance { get; private set; }

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

        playerInputActions = new InputActionControls();
    }

    private void OnEnable()
    {
        playerInputActions.Enable();
    }

    private void OnDisable()
    {
        playerInputActions.Disable();
    }
}
