using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadarUI : MonoBehaviour
{
    /*[Header("Game Manager")]
    [SerializeField] private GameManager gameManager;

    [Header("Radar")]
    [SerializeField] private GameObject radarUI;
    [SerializeField] private GameObject radarBlipUI;
    [Tooltip("Blip Size Ratio compare to radar from 0..1")]
    [SerializeField] private float radarBlipSize = 0.02f;
    [HideInInspector] private float radarWidth;
    [HideInInspector] private float radarHeight;
    [HideInInspector] private float blipWidth;
    [HideInInspector] private float blipHeight;

    // Start is called before the first frame update
    void Start()
    {
        radarWidth  = radarUI.GetComponent<RectTransform>().rect.width;
        radarHeight = radarUI.GetComponent<RectTransform>().rect.height;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void UpdateBlip(int ghostID, float distanceFromPlayerX, float distanceFromPlayerY)
    {
        //Find ID of Ghost is exist?
        int index = -1;
        GameObject blip;

        foreach(Transform child in radarUI.transform)
        {
            if(child.gameObject.GetComponent<GhostBlip>().ghostID == ghostID)
            {
                index = child.gameObject.transform.GetSiblingIndex();
            }
        }

        //If blip exist, Just update
        //Convert distance unit from -u..u to 0..2u
        float unitX = distanceFromPlayerX + gameManager.ghostMaxVisibleDistance.x;
        float unitY = distanceFromPlayerY + gameManager.ghostMaxVisibleDistance.y;
        float unitMaxX = gameManager.ghostMaxVisibleDistance.x * 2;
        float unitMaxY = gameManager.ghostMaxVisibleDistance.y * 2;

        //Scale distance unit to radar UI
        float positionX = (unitX / unitMaxX) * radarWidth;
        float positionY = (unitY / unitMaxY) * radarHeight;

        //Create new blip if it is not exist
        if(index < 0)
        {
            Debug.Log("Blip ID " + ghostID + " created at position " + distanceFromPlayerX + "," + distanceFromPlayerY);
            blip = Instantiate(radarBlipUI);
            blip.GetComponent<GhostBlip>().ghostID = ghostID;
        }
        else
        {
            Debug.Log("Blip ID " + ghostID + " found at index: " + index + " update position to " + distanceFromPlayerX + "," + distanceFromPlayerY);
            blip = radarUI.transform.GetChild(index).gameObject;
        }

        //Activate if blip is in radar
        if(distanceFromPlayerX < gameManager.ghostMaxVisibleDistance.x && distanceFromPlayerY < gameManager.ghostMaxVisibleDistance.y)
        {
            blip.SetActive(true);
        }
        else
        {
            blip.SetActive(false);
        }
        
        //Blip Properties
        blip.transform.SetParent(radarUI.transform);
        RectTransform rt = blip.GetComponent<RectTransform>();
        rt.SetInsetAndSizeFromParentEdge(RectTransform.Edge.Left, positionX, radarWidth * radarBlipSize);
        rt.SetInsetAndSizeFromParentEdge(RectTransform.Edge.Bottom, positionY, radarHeight * radarBlipSize); 
    }

    public void DeleteBlip(int ghostID)
    {
        //Find ID of Ghost is exist?
        int index = -1;

        foreach(Transform child in radarUI.transform)
        {
            if(child.gameObject.GetComponent<GhostBlip>().ghostID == ghostID)
            {
                index = child.gameObject.transform.GetSiblingIndex();
            }
        }

        //Delete blip if it's exist
        if(index >= 0)
        {
            Debug.Log("Blip ID " + ghostID + " deleted at index"+index);
            Destroy(radarUI.transform.GetChild(index).gameObject);
        }
        else
        {
            Debug.Log("Blip Not Found!");
        }
    }*/

}
