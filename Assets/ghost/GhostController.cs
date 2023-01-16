using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GhostState
{
    PASSIVE,
    AGGRESIVE,
}

public class GhostController : MonoBehaviour
{
    [SerializeField] private GhostState state;

    [SerializeField] private GameObject target;

    [SerializeField] private float speed = 10f;

    void Start()
    {
        
    }

    void Update()
    {
        //this.transform.LookAt(target.transform.position, Vector3.up);

        if(state == GhostState.PASSIVE)
        {
            this.transform.RotateAround(target.transform.position, Vector3.up, speed * Time.deltaTime);
        }
        else if(state == GhostState.AGGRESIVE)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, target.transform.position, speed / 10 * Time.deltaTime);
        }
    }
}
