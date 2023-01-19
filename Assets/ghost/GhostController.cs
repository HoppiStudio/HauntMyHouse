using UnityEngine;

public enum GhostState
{
    Passive,
    Aggresive,
}

public class GhostController : MonoBehaviour
{
    [SerializeField] private GhostState state;
    [SerializeField] private GameObject target;
    [SerializeField] private float speed = 10f;

    void Update()
    {
        //this.transform.LookAt(target.transform.position, Vector3.up);

        if(state == GhostState.Passive)
        {
            transform.RotateAround(target.transform.position, Vector3.up, speed * Time.deltaTime);
        }
        else if(state == GhostState.Aggresive)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed / 10 * Time.deltaTime);
        }
    }
}
