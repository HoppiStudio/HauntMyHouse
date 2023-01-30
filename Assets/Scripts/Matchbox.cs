using TMPro;
using UnityEngine;

public class Matchbox : MonoBehaviour
{
    [SerializeField] private TMP_Text debugText;
    private Matchstick _matchstick;
    private Vector3 _startPosition;
    private bool _isCollidingWithMatchstick;

    private void Start()
    {
        debugText.text = "";
        _startPosition = transform.position;
    }

    private void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            transform.position = _startPosition;
        }
        
        if(!_isCollidingWithMatchstick) { return; }

        if (OVRInput.GetDown(OVRInput.Button.One))
        {
            _matchstick.Ignite();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Matchstick>() != null)
        {
            _matchstick = other.GetComponent<Matchstick>();
            if (!_matchstick.IsOnFire())
            {
                debugText.text = "Press A to light the match";
                _isCollidingWithMatchstick = true;
            }
        }
    }
    
    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Matchstick>() != null)
        {
            debugText.text = "";
            _matchstick = null;
            _isCollidingWithMatchstick = false;
        }
    }
}