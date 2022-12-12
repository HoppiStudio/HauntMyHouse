using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlayers : MonoBehaviour
{
    void Start()
    {
        PhotonLobby.Instance.SpawnPlayers();
    }
}
