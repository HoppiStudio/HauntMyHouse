using System;
using UnityEngine;

public class Candle : Flammable
{
    public event Action OnCandleLit;
    //public event Action OnCandleUnlit;

    private Color _originalCandleColour;

    private void Awake()
    {
        _originalCandleColour = GetComponent<MeshRenderer>().material.color;
        Ignite(); // Ideally should be called in Start, but this causes issues. Shall be investigated later.
    }

    protected override void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            Destroy(gameObject);
        }
    }

    protected override void OnTriggerEnter(Collider other)
    {
        /*base.OnTriggerEnter(other);*/
        if (other.GetComponent<Flammable>() != null)
        {
            // If this object is on fire, ignite other unlit flammable objects
            if (!other.GetComponent<Flammable>().IsOnFire() && IsOnFire())
            {
                var flammable = other.GetComponent<Flammable>();
                flammable.SetFlameColour(GetFlameColour());
                flammable.Ignite();
                return;
            }
        }
        
        // If this candle is on fire, change flame colour of matchstick even if it's already on fire
        if (other.GetComponent<Matchstick>() != null && IsOnFire())
        {
            var matchstick = other.GetComponent<Matchstick>();

            // If the two flame colours match an existing rule, set the matchstick flame colour to the rule result 
            if (FlameColourMixingRules.CheckRule(matchstick.GetFlameColour(), this.GetFlameColour()))
            {
                matchstick.SetFlameColour(FlameColourMixingRules.CombineColours(matchstick.GetFlameColour(), this.GetFlameColour()));
            }
            // Reset matchstick flame to white when passed over a white flame
            else if (GetFlameColour() == FlameColour.White)
            {
                matchstick.SetFlameColour(FlameColour.White);
            }
            // Pass a new flame colour to matchstick if it's flame is white
            else if(matchstick.GetFlameColour() == FlameColour.White)
            {
                matchstick.SetFlameColour(this.GetFlameColour());
            }
            else
            {
                matchstick.Extinguish();
                return;
            }
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
