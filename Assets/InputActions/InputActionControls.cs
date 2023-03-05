//------------------------------------------------------------------------------
// <auto-generated>
//     This code was auto-generated by com.unity.inputsystem:InputActionCodeGenerator
//     version 1.4.1
//     from Assets/InputActions/InputActionControls.inputactions
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public partial class @InputActionControls : IInputActionCollection2, IDisposable
{
    public InputActionAsset asset { get; }
    public @InputActionControls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""InputActionControls"",
    ""maps"": [
        {
            ""name"": ""Player"",
            ""id"": ""58738e5e-24bf-452c-b935-c535306b4877"",
            ""actions"": [
                {
                    ""name"": ""Grab"",
                    ""type"": ""Button"",
                    ""id"": ""f9a35a6a-75f4-4b84-b9e2-14dee59c4b24"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Blockout"",
                    ""type"": ""Button"",
                    ""id"": ""42ab957f-69ac-41f1-a580-453cf216f6b2"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""94f97c2b-b748-4c2e-80d4-f7b5d6139657"",
                    ""path"": ""<XRController>/gripPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Grab"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""92a28d61-b193-4269-8bf7-ddc620e65441"",
                    ""path"": ""<XRController>/triggerPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Blockout"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // Player
        m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
        m_Player_Grab = m_Player.FindAction("Grab", throwIfNotFound: true);
        m_Player_Blockout = m_Player.FindAction("Blockout", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }
    public IEnumerable<InputBinding> bindings => asset.bindings;

    public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = false)
    {
        return asset.FindAction(actionNameOrId, throwIfNotFound);
    }
    public int FindBinding(InputBinding bindingMask, out InputAction action)
    {
        return asset.FindBinding(bindingMask, out action);
    }

    // Player
    private readonly InputActionMap m_Player;
    private IPlayerActions m_PlayerActionsCallbackInterface;
    private readonly InputAction m_Player_Grab;
    private readonly InputAction m_Player_Blockout;
    public struct PlayerActions
    {
        private @InputActionControls m_Wrapper;
        public PlayerActions(@InputActionControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @Grab => m_Wrapper.m_Player_Grab;
        public InputAction @Blockout => m_Wrapper.m_Player_Blockout;
        public InputActionMap Get() { return m_Wrapper.m_Player; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
        public void SetCallbacks(IPlayerActions instance)
        {
            if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
            {
                @Grab.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrab;
                @Grab.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrab;
                @Grab.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrab;
                @Blockout.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
                @Blockout.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
                @Blockout.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
            }
            m_Wrapper.m_PlayerActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Grab.started += instance.OnGrab;
                @Grab.performed += instance.OnGrab;
                @Grab.canceled += instance.OnGrab;
                @Blockout.started += instance.OnBlockout;
                @Blockout.performed += instance.OnBlockout;
                @Blockout.canceled += instance.OnBlockout;
            }
        }
    }
    public PlayerActions @Player => new PlayerActions(this);
    public interface IPlayerActions
    {
        void OnGrab(InputAction.CallbackContext context);
        void OnBlockout(InputAction.CallbackContext context);
    }
}