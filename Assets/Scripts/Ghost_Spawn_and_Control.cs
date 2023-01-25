using AiDirector.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
//using static UnityEditor.Experimental.AssetDatabaseExperimental.AssetDatabaseCounters;

public class Ghost_Spawn_and_Control : MonoBehaviour
{    
    //Ghost Spawns
    [SerializeField] private GameObject Ghost;

    //Player Location
    [SerializeField] private GameObject Player_Location;

    //Wawe
    private bool First_Wawe_Came = false;
    private bool Secound_Wawe_Came = false;
    private bool Third_Wawe_Came = false;

    //Counter
    private int Counter = 0;

    void Update()
    {
        //Intensity
        float current_intensity = Director.Instance.GetPerceivedIntensity();

        if (current_intensity > 10 && First_Wawe_Came == false)
        {
            First_Wawe_Came = true;
            Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);
        }

        if (current_intensity > 20 && Counter == 0)
        {
            Counter++;

            GhostController[] Found_Ghosts = FindObjectsOfType<GhostController>();

            if(Found_Ghosts != null)
            {
                for(int i = 0; i < Found_Ghosts.Length; i++)
                {
                    Found_Ghosts[i].state = GhostState.Aggresive;
                }
            }

        }

        if (current_intensity > 30 && Secound_Wawe_Came == false)
        {
            Secound_Wawe_Came = true;
            Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);
        }

        if (current_intensity > 40 && Counter == 1)
        {
            Counter++;

            GhostController[] Found_Ghosts = FindObjectsOfType<GhostController>();

            if (Found_Ghosts != null)
            {
                for (int i = 0; i < Found_Ghosts.Length; i++)
                {
                    Found_Ghosts[i].state = GhostState.Aggresive;
                }
            }

        }

        if (current_intensity > 50 && Third_Wawe_Came == false)
        {
            Third_Wawe_Came = true;
            Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);
        }


        if (current_intensity > 60 && Counter == 2)
        {
            Counter++;

            GhostController[] Found_Ghosts = FindObjectsOfType<GhostController>();

            if (Found_Ghosts != null)
            {
                for (int i = 0; i < Found_Ghosts.Length; i++)
                {
                    Found_Ghosts[i].state = GhostState.Aggresive;
                }
            }

        }

    }

    public Vector3 Randomized_Start_Location()
    {
        int X_Randomized = Random.Range(5, 15);
        int Z_Randomized = Random.Range(5, 15);
        return (new Vector3(Player_Location.transform.position.x + X_Randomized, Player_Location.transform.position.y, Player_Location.transform.position.z + Z_Randomized));
    }
}
