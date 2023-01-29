using System.Collections.Generic;
using UnityEngine;

public enum FlameColour
{
    White,
    Red,
    Green,
    Blue,
    Orange,
    Purple
}

public abstract class Flammable : MonoBehaviour
{
    [SerializeField] private FlameColour flameColour;
    [SerializeField] private ParticleSystem firePS;
    [SerializeField] private Light lightSource;
    [SerializeField] private List<GameObject> lightVolumes;
    private Vector3 _startPosition;
    private bool _isOnFire;

    private readonly Dictionary<FlameColour, Color> _flameColourDictionary = new()
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
        firePS.startColor = _flameColourDictionary[flameColour];
        lightSource.color = _flameColourDictionary[flameColour];
    }

    protected virtual void Start()
    {
        _startPosition = transform.position;
        //FlameColour = flameColour;
    }

    protected virtual void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            transform.position = _startPosition;
        }
    }

    protected virtual void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Flammable>() != null)
        {
            // If this object is on fire, ignite other flammable objects (if they aren't already on fire)
            if (!other.GetComponent<Flammable>()._isOnFire && _isOnFire)
            {
                var flammable = other.GetComponent<Flammable>();
                flammable.flameColour = flameColour;
                flammable.Ignite();
            }
        }
    }

    public virtual void Ignite()
    {
        firePS.startColor = _flameColourDictionary[flameColour];
        lightSource.color = _flameColourDictionary[flameColour];
        firePS.Play();
        lightSource.enabled = true;
        lightVolumes.ForEach(ctx => ctx.SetActive(true));
        _isOnFire = true;
    }

    public virtual void Extinguish()
    {
       firePS.Stop();
       lightSource.enabled = false;
       lightVolumes.ForEach(ctx => ctx.SetActive(false));
       _isOnFire = false;
    }

    public void SetFlameColour(FlameColour colour) => flameColour = colour;
    public FlameColour GetFlameColour() => flameColour;

    public bool IsOnFire() => _isOnFire;
}
