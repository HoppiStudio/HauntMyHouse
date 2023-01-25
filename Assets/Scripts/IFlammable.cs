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

/// <summary>
/// TODO:
/// Would probably be better served as an abstract than an interface
/// due to each object sharing common functionality. Child classes
/// don't need their own implementations of these methods. 
/// </summary>
public interface IFlammable 
{
    public ParticleSystem FirePS { get; set; }
    public Light LightSource { get; set; }
    public List<GameObject> LightVolumes { get; set; }
    public FlameColour FlameColour { get; set; }
    public bool IsOnFire { get; set; }
    public void Ignite();
    public void Extinguish();
}
