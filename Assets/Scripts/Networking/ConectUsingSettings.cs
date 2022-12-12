using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ConectUsingSettings : MonoBehaviour
{
    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }
}
