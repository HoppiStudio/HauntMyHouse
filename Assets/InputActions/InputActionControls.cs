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
                    ""name"": ""GrabLeft"",
                    ""type"": ""Button"",
                    ""id"": ""07e86192-2879-421a-a20c-bb84c51ee2cf"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""GrabRight"",
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
                },
                {
                    ""name"": ""UndoBlockout"",
                    ""type"": ""Button"",
                    ""id"": ""54dcfea9-bc0c-4724-a79a-9c1a15023343"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Interact"",
                    ""type"": ""Button"",
                    ""id"": ""a9f5f8d4-3f4c-4332-84f3-16a7c57fbf53"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Pause/Unpause"",
                    ""type"": ""Button"",
                    ""id"": ""55e5bf81-3c16-4f68-a956-a716329c9efe"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                }
            ],
            ""bindings"": [
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
                },
                {
                    ""name"": """",
                    ""id"": ""2dad4994-4310-4d4c-bb81-5607202e8c04"",
                    ""path"": ""<XRController>{RightHand}/secondaryButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""UndoBlockout"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""53bd05a9-0528-4079-87c6-229d6141e717"",
                    ""path"": ""<XRController>{RightHand}/primaryButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Interact"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""bf3e60dd-4d96-4998-991b-607aaa11790e"",
                    ""path"": ""<XRController>{LeftHand}/menu"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Pause/Unpause"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""defb4553-370c-427a-b7e9-36e3897ca075"",
                    ""path"": ""<Keyboard>/escape"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Pause/Unpause"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""3bcc44d8-4778-486a-b6fa-4e3a6f3d5ee3"",
                    ""path"": ""<XRController>{LeftHand}/gripPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""GrabLeft"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""6f78bed3-b1c4-418d-ac02-c38e4afbbd05"",
                    ""path"": ""<XRController>{RightHand}/gripPressed"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""GrabRight"",
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
        m_Player_GrabLeft = m_Player.FindAction("GrabLeft", throwIfNotFound: true);
        m_Player_GrabRight = m_Player.FindAction("GrabRight", throwIfNotFound: true);
        m_Player_Blockout = m_Player.FindAction("Blockout", throwIfNotFound: true);
        m_Player_UndoBlockout = m_Player.FindAction("UndoBlockout", throwIfNotFound: true);
        m_Player_Interact = m_Player.FindAction("Interact", throwIfNotFound: true);
        m_Player_PauseUnpause = m_Player.FindAction("Pause/Unpause", throwIfNotFound: true);
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
    private readonly InputAction m_Player_GrabLeft;
    private readonly InputAction m_Player_GrabRight;
    private readonly InputAction m_Player_Blockout;
    private readonly InputAction m_Player_UndoBlockout;
    private readonly InputAction m_Player_Interact;
    private readonly InputAction m_Player_PauseUnpause;
    public struct PlayerActions
    {
        private @InputActionControls m_Wrapper;
        public PlayerActions(@InputActionControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @GrabLeft => m_Wrapper.m_Player_GrabLeft;
        public InputAction @GrabRight => m_Wrapper.m_Player_GrabRight;
        public InputAction @Blockout => m_Wrapper.m_Player_Blockout;
        public InputAction @UndoBlockout => m_Wrapper.m_Player_UndoBlockout;
        public InputAction @Interact => m_Wrapper.m_Player_Interact;
        public InputAction @PauseUnpause => m_Wrapper.m_Player_PauseUnpause;
        public InputActionMap Get() { return m_Wrapper.m_Player; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
        public void SetCallbacks(IPlayerActions instance)
        {
            if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
            {
                @GrabLeft.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabLeft;
                @GrabLeft.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabLeft;
                @GrabLeft.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabLeft;
                @GrabRight.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabRight;
                @GrabRight.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabRight;
                @GrabRight.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnGrabRight;
                @Blockout.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
                @Blockout.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
                @Blockout.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnBlockout;
                @UndoBlockout.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnUndoBlockout;
                @UndoBlockout.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnUndoBlockout;
                @UndoBlockout.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnUndoBlockout;
                @Interact.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
                @Interact.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
                @Interact.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnInteract;
                @PauseUnpause.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnPauseUnpause;
                @PauseUnpause.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnPauseUnpause;
                @PauseUnpause.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnPauseUnpause;
            }
            m_Wrapper.m_PlayerActionsCallbackInterface = instance;
            if (instance != null)
            {
                @GrabLeft.started += instance.OnGrabLeft;
                @GrabLeft.performed += instance.OnGrabLeft;
                @GrabLeft.canceled += instance.OnGrabLeft;
                @GrabRight.started += instance.OnGrabRight;
                @GrabRight.performed += instance.OnGrabRight;
                @GrabRight.canceled += instance.OnGrabRight;
                @Blockout.started += instance.OnBlockout;
                @Blockout.performed += instance.OnBlockout;
                @Blockout.canceled += instance.OnBlockout;
                @UndoBlockout.started += instance.OnUndoBlockout;
                @UndoBlockout.performed += instance.OnUndoBlockout;
                @UndoBlockout.canceled += instance.OnUndoBlockout;
                @Interact.started += instance.OnInteract;
                @Interact.performed += instance.OnInteract;
                @Interact.canceled += instance.OnInteract;
                @PauseUnpause.started += instance.OnPauseUnpause;
                @PauseUnpause.performed += instance.OnPauseUnpause;
                @PauseUnpause.canceled += instance.OnPauseUnpause;
            }
        }
    }
    public PlayerActions @Player => new PlayerActions(this);
    public interface IPlayerActions
    {
        void OnGrabLeft(InputAction.CallbackContext context);
        void OnGrabRight(InputAction.CallbackContext context);
        void OnBlockout(InputAction.CallbackContext context);
        void OnUndoBlockout(InputAction.CallbackContext context);
        void OnInteract(InputAction.CallbackContext context);
        void OnPauseUnpause(InputAction.CallbackContext context);
    }
}
