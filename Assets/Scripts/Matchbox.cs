using UnityEngine;

public class Matchbox : MonoBehaviour
{
    private Vector3 _startPosition;
    
    private void Start()
    {
        _startPosition = transform.position;
    }

    private void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            transform.position = _startPosition;
        }
    }
}
