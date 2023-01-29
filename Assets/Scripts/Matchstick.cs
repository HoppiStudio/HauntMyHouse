using TMPro;
using UnityEngine;

public class Matchstick : Flammable
{
    [SerializeField] private TMP_Text debugText;
    private bool _isCollidingWithMatchbox;

    protected override void Start()
    {
        base.Start();
        debugText.text = "";
        Extinguish();
    }

    protected override void Update()
    {
        base.Update();
        
        if(!_isCollidingWithMatchbox) { return; }

        if (OVRInput.GetDown(OVRInput.Button.One))
        {
            // NOTE: Matchbox should handle igniting the matchstick?
            Ignite();
        }
    }

    protected override void OnTriggerEnter(Collider other)
    {
        base.OnTriggerEnter(other);
        
        if (other.GetComponent<Matchbox>() != null && !IsOnFire())
        {
            debugText.text = "Press A to light the match";
            _isCollidingWithMatchbox = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Matchbox>() != null)
        {
            debugText.text = "";
            _isCollidingWithMatchbox = false;
        }
    }
}
