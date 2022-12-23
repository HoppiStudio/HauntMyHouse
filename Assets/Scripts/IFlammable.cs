using UnityEngine;

public interface IFlammable // abstract class instead? (if each object will exhibit the same behaviour)
{
    public ParticleSystem FlammableParticleSystem { get; set; }
    public void Ignite(ParticleSystem particleSystem);
    public void Extinguish(ParticleSystem particleSystem);
}
