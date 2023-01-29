using System;
using UnityEngine;

public class Candle : Flammable
{
    public event Action OnCandleLit;
    //public event Action OnCandleUnlit;

    private Color _originalCandleColour;

    private void Awake() => _originalCandleColour = GetComponent<MeshRenderer>().material.color;

    protected override void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            Destroy(gameObject);
        }
    }

    protected override void OnTriggerEnter(Collider other)
    {
        base.OnTriggerEnter(other);
        
        // If this candle is on fire, change flame colour of matchstick even if it's on fire already
        if (other.GetComponent<Matchstick>() != null && IsOnFire())
        {
            var matchstick = other.GetComponent<Matchstick>();
            matchstick.SetFlameColour(this.GetFlameColour());
            matchstick.Ignite();
        }
    }

    public override void Ignite() 
    {
        base.Ignite();
        OnCandleLit?.Invoke();
    }

    public override void Extinguish()
    {
        base.Extinguish();
        //OnCandleUnlit?.Invoke();
    }

    public Color GetOriginalMaterialColour()
    {
        return _originalCandleColour;
    }
}
