using System;
using System.Collections.Generic;
using UnityEngine;

public class Candle : MonoBehaviour, IFlammable
{
    public event Action OnCandleLit;
    public event Action OnCandleUnlit;

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
    public Color originalColour;

    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;

    private void Start()
    {
        originalColour = GetComponent<MeshRenderer>().material.color;
        Extinguish();
    }

    private void OnTriggerEnter(Collider other)
    {
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

    public void Ignite() // Abstract class would probably be more ideal
    {
        FirePS.Play();
        LightSource.enabled = true;
        LightVolumes.ForEach(ctx => ctx.SetActive(true));
        IsOnFire = true;
        OnCandleLit?.Invoke();
    }

    public void Extinguish()
    {
        FirePS.Stop();
        LightSource.enabled = false;
        LightVolumes.ForEach(ctx => ctx.SetActive(false));
        IsOnFire = false;
        OnCandleUnlit?.Invoke();
    }
}
