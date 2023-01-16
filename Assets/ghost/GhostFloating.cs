using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostFloating : MonoBehaviour
{
    [SerializeField, Range(0, 2)] private float floatScale = 0.1f;
    [SerializeField] private float floatOffset = 0f;
    [SerializeField, Range(0, 5)] private float floatFrequency = 1f;

    [SerializeField] private GameObject body;
    private Vector3 startPosition;

    void Start()
    {
        startPosition = body.transform.position;

        floatScale += Random.Range(-0.002f, 0.002f);
        floatOffset = Random.Range(-1f, 1f);
    }

    void Update()
    {
        body.transform.localPosition = startPosition + new Vector3(0.0f, Mathf.Sin(floatOffset + (Time.time * floatFrequency)) * floatScale, 0.0f);
    }
}
