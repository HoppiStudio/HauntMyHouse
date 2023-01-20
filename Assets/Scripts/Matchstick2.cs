using System.Collections.Generic;
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

    public List<GameObject> LightVolumes
    {
        get => lightVolumes;
        set {}
    }
    public bool IsOnFire { get; set; }
    
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;
    [Space]
    [SerializeField] private TMP_Text debugText;
    private bool _isCollidingWithMatchbox;

    private void Start()
    {
        Extinguish();
        debugText.text = "";
    }

    private void Update()
    {
        if(!_isCollidingWithMatchbox) { return; }

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
            debugText.text = "Press A to light the match";
            _isCollidingWithMatchbox = true;
        }
        
        if (other.GetComponent<IFlammable>() != null)
        {
            // If this object is on fire, ignite other flammable objects (if not already on fire themselves)
            if (!other.GetComponent<IFlammable>().IsOnFire && IsOnFire)
            {
                var flammable = other.GetComponent<IFlammable>();
                flammable.Ignite();
            }
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

    public void Ignite()
    {
        FirePS.Play();
        LightSource.enabled = true;
        LightVolumes.ForEach(ctx => ctx.SetActive(true));
        IsOnFire = true;
    }

    public void Extinguish()
    {
        FirePS.Stop();
        LightSource.enabled = false;
        LightVolumes.ForEach(ctx => ctx.SetActive(false));
        IsOnFire = false;
    }
}
