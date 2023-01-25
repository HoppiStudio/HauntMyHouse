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
    public FlameColour FlameColour
    {
        get => flameColour; 
        set{}
    }
    public bool IsOnFire { get; set; }
    
    [HideInInspector] public Color originalCandleColour;
    [SerializeField] private FlameColour flameColour;
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;

    private void OnValidate()
    {
        switch (flameColour)
        {
            case FlameColour.White:
                firePS.startColor = Color.white;
                lightSource.color = Color.white;
                break;
            case FlameColour.Red:
                firePS.startColor = Color.red;
                lightSource.color = Color.red;
                break;
            case FlameColour.Green:
                firePS.startColor = Color.green;
                lightSource.color = Color.green;
                break;
            case FlameColour.Blue:
                firePS.startColor = Color.blue;
                lightSource.color = Color.blue;
                break;
            case FlameColour.Orange:
                firePS.startColor = new Color(1,0.5f,0);
                lightSource.color = new Color(1,0.5f,0);
                break;
            case FlameColour.Purple:
                firePS.startColor = new Color(0.5f, 0, 1);
                lightSource.color = new Color(0.5f, 0, 1);
                break;
            default:
                firePS.startColor = Color.white;
                lightSource.color = Color.white;
                break;
        }
    }

    private void Start()
    {
        originalCandleColour = GetComponent<MeshRenderer>().material.color;
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
