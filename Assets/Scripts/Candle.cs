using UnityEngine;

public class Candle : MonoBehaviour, IFlammable
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

    private void Start() => Extinguish();

    private void OnTriggerEnter(Collider other)
    {
        // Set fire to other flammable objects if this one is on fire
        if (other.GetComponent<IFlammable>() != null && IsOnFire)
        {
            var flammable = other.GetComponent<IFlammable>();
            flammable.Ignite();
        }
    }

    public void Ignite() // Abstract class would probably be more ideal
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
