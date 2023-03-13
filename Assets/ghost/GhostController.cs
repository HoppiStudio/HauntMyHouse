using System;
using System.Collections;
using UnityEngine;

public enum GhostState
{
    Passive,
    Aggresive,
    Scared,
}

public class GhostController : MonoBehaviour
{
    [SerializeField] public GhostState state;
    [SerializeField] private Transform target;
    [SerializeField] private float speed = 10f;

    [SerializeField] private AudioClip Attack_Voice;
    [SerializeField] private AudioClip Stunned_Voice;
    [SerializeField] private AudioClip Normal_Voice;

    [NonSerialized] private Renderer Renderer;
    private Vector3 _targetPos;
    private int counter = 0;

    [SerializeField] public Podium Attached_Podium;
    [SerializeField] public bool Orange_Ghost_Banishment_Rules = false;
    [SerializeField] public bool Purple_Ghost_Banishment_Rules = false;
    [SerializeField] public bool Green_Ghost_Banishment_Rules = false;

    private void Start()
    {
        target = GameObject.Find("PlayerController").transform;
        _targetPos = target.position + Vector3.down*0.80f;
        Renderer = GetComponent<Renderer>();
    }

    
    void Update()
    {
        Debug.DrawLine(transform.position, _targetPos, Color.green);
        
        //transform.LookAt(_targetPos, Vector3.up);
        int randomized_int = UnityEngine.Random.Range(-2, 2);
        int state_randomizer = UnityEngine.Random.Range(0, 5);
        int sound_randomizer = UnityEngine.Random.Range(0, 2);

        if (state == GhostState.Passive)
        {
            if(state_randomizer < 3)
            {
                transform.position = Vector3.MoveTowards(transform.position, Randomized_Start_Location(), speed / 10 * Time.deltaTime * randomized_int);
                
                if (GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
                {
                    GetComponent<AudioSource>().PlayOneShot(Normal_Voice);
                }
                //Renderer.material.SetColor("_Color", Color.green);
            }
            else
            {
                int movement_randomizer_towards = UnityEngine.Random.Range(-2, +1);
                transform.position = Vector3.MoveTowards(transform.position, _targetPos, speed / 10 * Time.deltaTime * movement_randomizer_towards);
            }
        }
        else if(state == GhostState.Aggresive)
        {
            if (state_randomizer < 3)
            {
                transform.position = Vector3.MoveTowards(transform.position, _targetPos, speed / 10 * Time.deltaTime * 5f);
                if (counter ==0 && sound_randomizer == 1)
                {
                    counter++;
                    GetComponent<AudioSource>().PlayOneShot(Attack_Voice);
                }
                //Renderer.material.SetColor("_Color", Color.red);
            }
            else
            {
                int randomized_int_2 = UnityEngine.Random.Range(-3, 3);
                transform.RotateAround(_targetPos, Vector3.up, speed * Time.deltaTime * randomized_int_2);
            }

            StartCoroutine(Rotate_Around_Randomly());   
        }
        else if(state == GhostState.Scared)
        {
            counter = 0;
            if (GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
            {
                GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
            }
            //Renderer.material.SetColor("_Color", Color.yellow);
        }

        transform.LookAt(_targetPos);


        /*//Banishment Rules
        if (this.Orange_Ghost_Banishment_Rules == true)
        {
            if (this.Attached_Podium.placedCandle != null && this.Attached_Podium.currentPodiumColour == PodiumColour.White)
            {
                Ghost_Spawn_and_Control Ghost_Control_Manager = FindObjectOfType<Ghost_Spawn_and_Control>();
                Ghost_Control_Manager.Clear_Podiums_First_Ghost_Eliminated();


                Destroy(gameObject, 2);
                GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
                this.GetComponent<Renderer>().material.SetColor("_Color", new Color32(255, 255, 255, 10));
                Orange_Ghost_Banishment_Rules = false;

                
            }
        }

        if (this.Purple_Ghost_Banishment_Rules == true)
        {
            Symbol_Puzzle_Controller PUZZLE_SYMBOL = FindObjectOfType<Symbol_Puzzle_Controller>();
            if (PUZZLE_SYMBOL.Ghost_Banished_by_Symbol_Puzzle == true)
            {
                GameObject[] go = GameObject.FindGameObjectsWithTag("Symbol_Animation");
                //if the tree exist then destroy it
                if (go[0] != null)
                {
                    for(int i = 0; i < go.Length; i++)
                    {
                        Destroy(go[i]);
                    }
                }
                  
                Destroy(gameObject, 2);
                GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
                this.GetComponent<Renderer>().material.SetColor("_Color", new Color32(255, 255, 255, 10));
                Purple_Ghost_Banishment_Rules = false;
            }

        }

        if (this.Green_Ghost_Banishment_Rules == true)
        {

            Ghost_Spawn_and_Control Ghost_Control_Manager = FindObjectOfType<Ghost_Spawn_and_Control>();
            Ghost_Control_Manager.Clear_Podiums_First_Ghost_Eliminated();


            Destroy(gameObject, 2);
            GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
            this.GetComponent<Renderer>().material.SetColor("_Color", new Color32(255, 255, 255, 10));
            Green_Ghost_Banishment_Rules = false;
        }*/


        //For Debugging Symbol Puzzle
    /*    Ghost_Spawn_and_Control Ghost_Control_Manager = FindObjectOfType<Ghost_Spawn_and_Control>();
        Ghost_Control_Manager.Clear_Podiums_First_Ghost_Eliminated();*/
    }

    IEnumerator Rotate_Around_Randomly()
    {
        int randomized_int = UnityEngine.Random.Range(-1, 1);
        yield return new WaitForSeconds(0.2f);
        transform.RotateAround(_targetPos, Vector3.up, speed * Time.deltaTime * randomized_int);
    }
    
    IEnumerator Go_Towards_Backwards_Randomly()
    {
        int randomized_int = UnityEngine.Random.Range(-1, 1);
        int movement_randomizer_towards = UnityEngine.Random.Range(-10, +10);
        yield return new WaitForSeconds(0.2f);
        if (randomized_int < 5)
        {
            transform.position = Vector3.MoveTowards(transform.position, _targetPos, speed / 10 * Time.deltaTime * movement_randomizer_towards);

        }
    }

    public Vector3 Randomized_Start_Location()
    {
        int X_Randomized = UnityEngine.Random.Range(5, 15);
        int Z_Randomized = UnityEngine.Random.Range(5, 15);
        return (new Vector3(_targetPos.x + X_Randomized, _targetPos.y - 1, _targetPos.z + Z_Randomized));
    }
}
