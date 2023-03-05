/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using System;

public enum LeverState
{
    Up,
    Middle,
    Down
}

[RequireComponent(typeof(XRGrabInteractable)), RequireComponent(typeof(HingeJoint))]
public class Lever : MonoBehaviour
{
    public LeverState state = LeverState.Middle;

    [SerializeField] private int deadzone = 60;

    private HingeJoint lever;

    void Start()
    {
        lever = this.GetComponent<HingeJoint>();
    }

    void Update()
    {
        LeverState previousState = state;

        if (lever.angle <= lever.limits.min + deadzone)
        {
            StateChange(previousState, LeverState.Up);
        }
        else if (lever.angle >= lever.limits.max - deadzone)
        {
            StateChange(previousState, LeverState.Down);
        }
        else
        {
            StateChange(previousState, LeverState.Middle);
        }
    }

    public event Action OnLeverStateChanged;
    private void StateChange(LeverState previousState, LeverState newState)
    {
        if (previousState == newState)
            return;

        state = newState;
        Debugger();

        OnLeverStateChanged?.Invoke();
    }

    private void Debugger()
    {
        Debug.Log(this + ": " + state);
    }
}*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using System;

public enum LeverState
{
    Up,
    Middle,
    Down
}

[RequireComponent(typeof(XRGrabInteractable)), RequireComponent(typeof(HingeJoint))]
public class Lever : MonoBehaviour
{
    public LeverState state = LeverState.Middle;

    [SerializeField] private int deadzone = 60;

    private HingeJoint lever;

    void Start()
    {
        lever = this.GetComponent<HingeJoint>();
    }

    void Update()
    {
        LeverState previousState = state;

        if (lever.angle <= lever.limits.min + deadzone)
        {
            StateChange(previousState, LeverState.Up);
        }
        else if (lever.angle >= lever.limits.max - deadzone)
        {
            StateChange(previousState, LeverState.Down);
        }
        else
        {
            StateChange(previousState, LeverState.Middle);
        }
    }

    public event Action OnLeverStateChanged;
    private void StateChange(LeverState previousState, LeverState newState)
    {
        if (previousState == newState)
            return;

        state = newState;
        Debugger();

        OnLeverStateChanged?.Invoke();
    }

    public void SetState(LeverState newState)
    {
        LeverState previousState = state;

        state = newState;
        Debugger();

        if (previousState != newState)
        {
            OnLeverStateChanged?.Invoke();
        }
    }

    private void Debugger()
    {
        Debug.Log(this + ": " + state);
    }
}
