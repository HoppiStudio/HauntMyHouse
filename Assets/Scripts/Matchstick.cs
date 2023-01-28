using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Matchstick : MonoBehaviour, IFlammable
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
    public FlameColour FlameColour
    {
        get => flameColour;
        set => flameColour = value;
    }
    public bool IsOnFire { get; set; }
    
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;
    [SerializeField] private FlameColour flameColour;
    [Space]
    [SerializeField] private TMP_Text debugText;
    private bool _isCollidingWithMatchbox;
    private Vector3 _startPosition;
    
    private readonly Dictionary<FlameColour, Color> _matchstickFlameColourDict = new()
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
        firePS.startColor = _matchstickFlameColourDict[flameColour];
        lightSource.color = _matchstickFlameColourDict[flameColour];
    }

    private void Start()
    {
        _startPosition = transform.position;
        //FlameColour = flameColour;
        debugText.text = "";
        Extinguish();
    }

    private void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            transform.position = _startPosition;
        }
        
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
            // If this object is on fire, ignite other flammable objects (if they aren't already on fire)
            if (!other.GetComponent<IFlammable>().IsOnFire && IsOnFire)
            {
                var flammable = other.GetComponent<IFlammable>();
                flammable.FlameColour = flameColour;
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
        CheckFlameColour();
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
