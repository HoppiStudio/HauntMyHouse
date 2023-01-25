using AiDirector.Scripts;
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
    [SerializeField] private GameObject target;
    [SerializeField] private float speed = 10f;

    [SerializeField] private AudioClip Attack_Voice;
    [SerializeField] private AudioClip Stunned_Voice;
    [SerializeField] private AudioClip Normal_Voice;

    [NonSerialized] private Renderer Renderer;

    private void Start()
    {
 

        target = GameObject.Find("PlayerController");
        Renderer = this.GetComponent<Renderer>();
    }

    private int counter = 0;
    void Update()
    {
        //this.transform.LookAt(target.transform.position, Vector3.up);
        int randomized_int = UnityEngine.Random.Range(-2, 2);
        int state_randomizer = UnityEngine.Random.Range(0, 5);
        int sound_randomizer = UnityEngine.Random.Range(0, 2);

        if (state == GhostState.Passive)
        {
            if(state_randomizer < 3)
            {
                transform.position = Vector3.MoveTowards(this.transform.position, Randomized_Start_Location(), speed / 10 * Time.deltaTime * randomized_int);


                if (this.GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
                {
                    this.GetComponent<AudioSource>().PlayOneShot(Normal_Voice);
                }
                Renderer.material.SetColor("_Color", Color.green);
            }
            else
            {
                int movement_randomizer_towards = UnityEngine.Random.Range(-2, +1);
                transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed / 10 * Time.deltaTime * movement_randomizer_towards);
            }
          
        }
        else if(state == GhostState.Aggresive)
        {
            if (state_randomizer < 3)
            {
                transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed / 10 * Time.deltaTime * 5f);
                if (counter ==0 && sound_randomizer == 1)
                {
                    counter++;
                    this.GetComponent<AudioSource>().PlayOneShot(Attack_Voice);
                }
                Renderer.material.SetColor("_Color", Color.red);
            }
            else
            {
                int randomized_int_2 = UnityEngine.Random.Range(-3, 3);
                transform.RotateAround(target.transform.position, Vector3.up, speed * Time.deltaTime * randomized_int_2);
            }


            StartCoroutine(Rotate_Around_Randomly());   
        }
        else if(state == GhostState.Scared)
        {
            counter = 0;
            if (this.GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
            {
                this.GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
            }
            Renderer.material.SetColor("_Color", Color.yellow);
        }

        this.transform.LookAt(target.transform.position);
    }

    IEnumerator Rotate_Around_Randomly()
    {
        int randomized_int = UnityEngine.Random.Range(-1, 1);
        yield return new WaitForSeconds(0.2f);
        transform.RotateAround(target.transform.position, Vector3.up, speed * Time.deltaTime * randomized_int);
    }


    IEnumerator Go_Towards_Backwards_Randomly()
    {
        int randomized_int = UnityEngine.Random.Range(-1, 1);
        int movement_randomizer_towards = UnityEngine.Random.Range(-10, +10);
        yield return new WaitForSeconds(0.2f);
        if (randomized_int < 5)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed / 10 * Time.deltaTime * movement_randomizer_towards);

        }
    }

    public Vector3 Randomized_Start_Location()
    {
        int X_Randomized = UnityEngine.Random.Range(5, 15);
        int Z_Randomized = UnityEngine.Random.Range(5, 15);
        return (new Vector3(target.transform.position.x + X_Randomized, target.transform.position.y - 1, target.transform.position.z + Z_Randomized));
    }
}
