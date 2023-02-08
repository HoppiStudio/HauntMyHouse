using AiDirector.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using static UnityEngine.GraphicsBuffer;
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

    //End
    [SerializeField]private AudioClip End_Clip;

    //Counter
    private int Counter = 0;

    //Attached Podiums for Ghosts
    [SerializeField] Podium Attached_Podium_for_Red_Ghost;
    [SerializeField] Podium Attached_Podium_for_Blue_Ghost;
    [SerializeField] Podium Attached_Podium_for_Purple_Ghost;


    GameObject First_Ghost;
    GameObject Secound_Ghost;
    GameObject Third_Ghost;

    //End Game
    [SerializeField] Canvas End_Game_Canvas;
    private void Start()
    {
        End_Game_Canvas.enabled = false;
    }
    void Update()
    {
        //Intensity
        float current_intensity = Director.Instance.GetPerceivedIntensity();

        if (current_intensity > 10 && First_Wawe_Came == false)
        {
            First_Wawe_Came = true;
            First_Ghost = Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);

            First_Ghost.GetComponent<Renderer>().material.SetColor("_Color", new Color32(80, 19, 29, 10));
            First_Ghost.GetComponent<GhostController>().Attached_Podium = this.Attached_Podium_for_Red_Ghost;
            First_Ghost.GetComponent<GhostController>().Orange_Ghost_Banishment_Rules = true;
        }

        if (current_intensity > 60 && Counter == 0)
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

        if (current_intensity > 70 && Secound_Wawe_Came == false)
        {
            Secound_Wawe_Came = true;
            Secound_Ghost = Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);

            Secound_Ghost.GetComponent<Renderer>().material.SetColor("_Color", new Color32(19, 26, 80, 10));
            Secound_Ghost.GetComponent<GhostController>().Attached_Podium = this.Attached_Podium_for_Blue_Ghost;
            Secound_Ghost.GetComponent<GhostController>().Purple_Ghost_Banishment_Rules = true;
        }

        if (current_intensity > 80 && Counter == 1)
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

        if (current_intensity > 90 && Third_Wawe_Came == false)
        {
            Third_Wawe_Came = true;
            Third_Ghost = Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);
            
            
            Third_Ghost.GetComponent<Renderer>().material.SetColor("_Color", new Color32(80, 19, 69, 10));
            Third_Ghost.GetComponent<GhostController>().Attached_Podium = this.Attached_Podium_for_Purple_Ghost;
            Third_Ghost.GetComponent<GhostController>().Green_Ghost_Banishment_Rules = true;
        }


        if (current_intensity > 99 && Counter == 2)
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


        Player_HP PLAYERHP = FindObjectOfType<Player_HP>();

        if(PLAYERHP.HP <= 0 && End_State_Reched == false)
        {
            End_State_Reched = true;
            End_State();


            AudioSource Backtorund_AudioSource = GameObject.Find("Background Sound").GetComponent<AudioSource>();
            Backtorund_AudioSource.PlayOneShot(End_Clip);
        }







        //End State Update

        if(End_Game_Canvas.enabled == true && _current_Scale_Factor < _max_Scale_Factor)
        {
            StartCoroutine(Scale_Canvas_Over_Time());
            _current_Scale_Factor++;
        }

    }

    private int _current_Scale_Factor = 0;
    private int _max_Scale_Factor = 1000;

    private bool End_State_Reched = false;
    public Vector3 Randomized_Start_Location()
    {
        int X_Randomized = Random.Range(-15, 15);
        int Z_Randomized = Random.Range(-15, 15);
        return (new Vector3(Player_Location.transform.position.x + X_Randomized, Player_Location.transform.position.y - 1, Player_Location.transform.position.z + Z_Randomized));
    }

    IEnumerator Scale_Canvas_Over_Time()
    {
        yield return new WaitForSeconds(0.05f);
        End_Game_Canvas.transform.localScale += new Vector3(0.1f, 0.1f, 0.1f);
    }

    public void End_State()
    {
        for(int i = 0; i < 25; i++)
        {
            var x = Instantiate(Ghost, Randomized_Start_Location(), Player_Location.transform.rotation);
            x.GetComponent<AudioSource>().mute = true;
        }
        StartCoroutine(Attack_Player());

        End_Game_Canvas.enabled = true;
    }

    IEnumerator Attack_Player() {
        yield return new WaitForSeconds(6f);


        GhostController[] Found_Ghosts = FindObjectsOfType<GhostController>();
        if (Found_Ghosts != null)
        {
            for (int i = 0; i < Found_Ghosts.Length; i++)
            {
                Found_Ghosts[i].state = GhostState.Aggresive;
            }
        }

        yield return new WaitForSeconds(4f);
        //Application.Quit();
    }
}
