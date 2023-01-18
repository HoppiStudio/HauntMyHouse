using UnityEngine;

public interface IFlammable
{
    //public List<ParticleSystem> FireEffects { get; set; }
    public ParticleSystem FirePS { get; set; }
    public Light LightSource { get; set; }
    public bool IsOnFire { get; set; }
    public void Ignite();
    public void Extinguish();
}
