using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameTest : MonoBehaviour
{
    [Header("Game Manager")]
    [SerializeField] private GameManager gameManager;

    [Header("Radar UI")]
    [SerializeField] private RadarUI radarUI;

    [Header("Radar UI: Update Blip")]
    [SerializeField] private int ghostIDForUpdate;
    [SerializeField] private float distanceFromPlayerX;
    [SerializeField] private float distanceFromPlayerY;
    [Tooltip("Click to execute this function, be sure to update parameter in section")]
    [SerializeField] private bool executeUpdateBlip;

    [Header("Radar UI: Delete Blip")]
    [SerializeField] private int ghostIDForDelete;
    [Tooltip("Click to execute this function, be sure to update parameter in section")]
    [SerializeField] private bool executeDeleteBlip;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(executeUpdateBlip)
        {
            radarUI.UpdateBlip(ghostIDForUpdate, distanceFromPlayerX, distanceFromPlayerY);
            executeUpdateBlip = false;
        }

        if(executeDeleteBlip)
        {
            radarUI.DeleteBlip(ghostIDForDelete);
            executeDeleteBlip = false;
        }        
    }
}
