using TMPro;
using UnityEngine;

public class Matchstick2 : MonoBehaviour, IFlammable
{
    public ParticleSystem FirePS
    {
        get => firePS;
        set {}
    }
    public Light LightSource 
    { 
        get => lightSource;
        set {}
    }
    public bool IsOnFire { get; set; }
    
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [Space]
    [SerializeField] private TMP_Text debugText;
    private bool _isCollidingWithMatchbox;

    private void Start() => Extinguish();

    private void Update()
    {
        if(!_isCollidingWithMatchbox) { return; }
        
        debugText.text = "Press A to light the match";

        if (OVRInput.GetDown(OVRInput.Button.One))
        {
            // NOTE: Matchbox should handle igniting the matchstick?
            Ignite();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Matchbox>() != null && !IsOnFire)
        {
            _isCollidingWithMatchbox = true;
        }
        
        // Set fire to other flammable objects if this one is on fire
        if (other.GetComponent<IFlammable>() != null && IsOnFire)
        {
            var flammable = other.GetComponent<IFlammable>();
            flammable.Ignite();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Matchbox>() != null)
        {
            _isCollidingWithMatchbox = false;
        }
    }

    public void Ignite()
    {
        FirePS.Play();
        LightSource.enabled = true;
        IsOnFire = true;
    }

    public void Extinguish()
    {
        FirePS.Stop();
        LightSource.enabled = false;
        IsOnFire = false;
    }
}
