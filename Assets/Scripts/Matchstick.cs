using UnityEngine;

public class Matchstick : Flammable
{
    private Vector3 _positionBeforeSwipe;

    protected override void Start()
    {
        base.Start();
        Extinguish();
    }

    protected override void Update()
    {
        if (transform.position.y <= 0.5f)
        {
            Extinguish();
        }
        base.Update();
    }
}
