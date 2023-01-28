using System;
using System.Collections.Generic;
using UnityEngine;

public class Candle : MonoBehaviour, IFlammable
{
    public event Action OnCandleLit;
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
    
    private readonly Dictionary<FlameColour, Color> _candleFlameColourDict = new()
    {
        {FlameColour.White, Color.white},
        {FlameColour.Red, Color.red},
        {FlameColour.Green, Color.green},
        {FlameColour.Blue, Color.cyan},
        {FlameColour.Orange, new Color(1,0.5f,0)},
        {FlameColour.Purple, new Color(0.5f, 0, 1)}
    };

    private void OnValidate()
    {
        firePS.startColor = _candleFlameColourDict[flameColour];
        lightSource.color = _candleFlameColourDict[flameColour];
    }

    private void Awake() => originalCandleColour = GetComponent<MeshRenderer>().material.color;

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
        firePS.startColor = _candleFlameColourDict[flameColour];
        lightSource.color = _candleFlameColourDict[flameColour];
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
        //OnCandleUnlit?.Invoke();
    }
}
