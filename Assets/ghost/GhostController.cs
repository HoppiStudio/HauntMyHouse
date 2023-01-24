using AiDirector.Scripts;
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

    private void Start()
    {
        target = GameObject.Find("PlayerController");
    }
    void Update()
    {
        //this.transform.LookAt(target.transform.position, Vector3.up);
        int randomized_int = Random.Range(0, 2);
        int sound_randomizer = Random.Range(0, 2);

        if (state == GhostState.Passive)
        {
            transform.RotateAround(target.transform.position, Vector3.up, speed * Time.deltaTime * randomized_int);

            if(this.GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
            {
                this.GetComponent<AudioSource>().PlayOneShot(Normal_Voice);
            }

        }
        else if(state == GhostState.Aggresive)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed / 10 * Time.deltaTime * 0.5f);
            if (this.GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
            {
                this.GetComponent<AudioSource>().PlayOneShot(Attack_Voice);
            }
        }
        else if(state == GhostState.Scared)
        {
            if (this.GetComponent<AudioSource>().isPlaying == false && sound_randomizer == 1)
            {
                this.GetComponent<AudioSource>().PlayOneShot(Stunned_Voice);
            }
        }
    }
}
