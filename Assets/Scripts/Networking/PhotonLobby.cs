using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine.UI;
using System.Text;
using UnityEngine.SceneManagement;

public class PhotonLobby : MonoBehaviourPunCallbacks
{
    public static PhotonLobby Instance { get; private set; }

    private const byte MAXPLAYERCOUNT = 2;

    /// <summary>
    /// Button gameobjects found in the Lobby scene under the button container
    /// </summary>
    [Header ("Button References")]
    [SerializeField] private Button createRoomButton;
    [SerializeField] private Button joinRoomButton;
    [SerializeField] private Button startGameButton;

    /// <summary>
    /// Prefabs found in the Resources/Players folder
    /// </summary>
    [Header("Player Prefab References")]
    [SerializeField] private GameObject vrPlayerPrefab;
    [SerializeField] private GameObject screenPlayerPrefab;

    private void Awake()
    {
        // If there is already an instance then destroy it and replace with the new one
        if (Instance != null && Instance != this)
        {
            Destroy(Instance);
            Debug.LogWarning("Another instance of PhotonLobby found, there should only be one in the scene");
        }
        Instance = this;
        DontDestroyOnLoad(this);

        PhotonNetwork.AutomaticallySyncScene = true;
        SetUIByPlatform();
    }

    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    ////////////////////////// PHOTON ENGINE NETWORKING OVERRIDES ///////////////////////////

    /// <summary>
    /// Runs when a user connects to the Photon server
    /// </summary>
    public override void OnConnectedToMaster()
    {
        Debug.Log("OnConnectedToMaster() was called by PUN.");
#if UNITY_ANDROID
        joinRoomButton.interactable   = true;
#else
        createRoomButton.interactable = true;
#endif

#if UNITY_EDITOR
        joinRoomButton.interactable = true;
        createRoomButton.interactable = true;
#endif
    }

    /// <summary>
    /// Runs when a room has been sucessfully created
    /// </summary>
    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
        Debug.Log($"New room created with code: {PhotonNetwork.CurrentRoom.Name}");
    }

    /// <summary>
    /// Runs when a room fails to be created
    /// </summary>
    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        base.OnCreateRoomFailed(returnCode, message);
        Debug.Log($"Creating new room failed, {message}");
        CreateNewRoom();
    }

    /// <summary>
    /// Runs when this user fails to join random room and creates a new room
    /// </summary>
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        base.OnJoinRandomFailed(returnCode, message);
        Debug.Log($"Failed to join random room. {message}. Creating new room");
        //CreateNewRoom();
    }

    /// <summary>
    /// Runs when this user sucessfully joins a room
    /// </summary>
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();

        //SceneManager.LoadScene("Room");

        Debug.Log($"Joined room {PhotonNetwork.CurrentRoom.Name}");

        if(PhotonNetwork.CurrentRoom.PlayerCount == MAXPLAYERCOUNT)
        {
            PhotonView photonView = PhotonView.Get(this);
            photonView.RPC("RPCStartGameButton", RpcTarget.MasterClient);
        }
    }

    /// <summary>
    /// Runs when this user fails to join a specified room
    /// </summary>
    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        base.OnJoinRoomFailed(returnCode, message);
        Debug.Log($"Failed to join room. {message}");
    }

    /// <summary>
    /// Runs when this user is disconnected from the Photon server
    /// </summary>
    /// <param name="cause"> Reason for disconnection </param>
    public override void OnDisconnected(DisconnectCause cause)
    {
        Debug.LogWarningFormat("OnDisconnected() was called by PUN with reason {0}", cause);
    }

    ////////////////////////// PRIVATE FUNCTIONS ///////////////////////////

    /// <summary>
    /// Enables Photon functionality based off detected platform
    /// </summary>
    private void SetUIByPlatform()
    {
#if UNITY_ANDROID
        joinRoomButton.gameObject.SetActive(true);
        joinRoomButton.interactable = false;
#else
        createRoomButton.gameObject.SetActive(true);
        createRoomButton.interactable = false;

        startGameButton.gameObject.SetActive(true);
        startGameButton.interactable = false;
#endif

#if UNITY_EDITOR
        joinRoomButton.gameObject.SetActive(true);
        joinRoomButton.interactable = false;

        createRoomButton.gameObject.SetActive(true);
        createRoomButton.interactable = false;

        startGameButton.gameObject.SetActive(true);
        startGameButton.interactable = false;
#endif
    }

    ////////////////////////// PUBLIC NETWORKING FUNCTION CALLS ///////////////////////////

    /// <summary>
    /// Creates a room with a random code
    /// </summary>
    public void CreateNewRoom()
    {
        const string glyphs = "abcdefghijklmnopqrstuvwxyz";
        int charAmount = 5;

        string roomCode;
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < charAmount; i++)
        {
            sb.Append(glyphs[Random.Range(0, glyphs.Length)]);
        }

        roomCode = sb.ToString().ToUpper();

        RoomOptions roomOptions = new RoomOptions
        {
            IsOpen = true,
            IsVisible = true,
            MaxPlayers = MAXPLAYERCOUNT,
        };

        PhotonNetwork.CreateRoom(roomCode, roomOptions);
    } 
    
    /// <summary>
    /// Join a random room
    /// </summary>
    public void JoinRandomRoom()
    {
        PhotonNetwork.JoinRandomRoom();
    }

    /// <summary>
    /// Leaves the current room
    /// </summary>
    public void OnCancel()
    {
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene("MainMenu");
    }

    public void StartGame()
    {
        PhotonNetwork.LoadLevel(1);
        //PhotonView photonView = PhotonView.Get(this);
        //photonView.RPC("RPCStartGame", RpcTarget.MasterClient);
    }

    //RPC call for host to start game button on max players reached OR RPC call to all clients to LoadLevel
    [PunRPC]
    private void RPCStartGameButton()
    {
#if UNITY_ANDROID

#else
        startGameButton.interactable = true;
#endif

#if UNITY_EDITOR
        startGameButton.interactable = true;
#endif
    }

    public void SpawnPlayers()
    {
        if(PhotonNetwork.CurrentRoom.PlayerCount == 0)
        {
            PhotonNetwork.Instantiate(screenPlayerPrefab.name, Vector3.zero, Quaternion.identity);
        }
        else
        {
            PhotonNetwork.Instantiate(vrPlayerPrefab.name, Vector3.zero, Quaternion.identity);
        }
    }
}
