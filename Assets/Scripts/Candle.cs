using System;
using System.Collections.Generic;
using UnityEngine;

public class Candle : MonoBehaviour, IFlammable
{
    //public event Action OnCandleLit;
    //public event Action OnCandleUnlit;

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
        set => flameColour = value;
    }
    public bool IsOnFire { get; set; }
    
    [HideInInspector] public Color originalCandleColour;
    [SerializeField] private FlameColour flameColour;
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;

    private void OnValidate()
    {
        CheckFlameColour();
    }

    private void Start()
    {
        originalCandleColour = GetComponent<MeshRenderer>().material.color;
        FirePS.Stop();
        LightSource.enabled = false;
        LightVolumes.ForEach(ctx => ctx.SetActive(false));
        //Extinguish();
    }

    private void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<IFlammable>() != null)
        {
            // If this object is on fire, ignite other flammable objects (if they aren't already on fire)
            if (!other.GetComponent<IFlammable>().IsOnFire && IsOnFire)
            {
                var flammable = other.GetComponent<IFlammable>();
                flammable.FlameColour = flameColour;
                flammable.Ignite();
            }

            // If this candle is on fire, change flame colour of matchstick even if it's on fire already
            if (other.GetComponent<Matchstick>() != null && IsOnFire)
            {
                var flammable = other.GetComponent<IFlammable>();
                flammable.FlameColour = flameColour;
                flammable.Ignite();
            }
        }
    }

    public void Ignite() // Abstract class would probably be more ideal
    {
        CheckFlameColour();
        FirePS.Play();
        LightSource.enabled = true;
        LightVolumes.ForEach(ctx => ctx.SetActive(true));
        IsOnFire = true;
        BanishManager.Instance.OnCandleLitEvent(); // TODO: Tidy this
        //OnCandleLit?.Invoke();
    }

    public void Extinguish()
    {
        FirePS.Stop();
        LightSource.enabled = false;
        LightVolumes.ForEach(ctx => ctx.SetActive(false));
        IsOnFire = false;
        BanishManager.Instance.OnCandleUnlitEvent(); // TODO: Tidy this
        //OnCandleUnlit?.Invoke();
    }
    
    private void CheckFlameColour()
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
                firePS.startColor = Color.cyan;
                lightSource.color = Color.cyan;
                break;
            case FlameColour.Orange:
                firePS.startColor = new Color(1, 0.5f, 0);
                lightSource.color = new Color(1, 0.5f, 0);
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
}
