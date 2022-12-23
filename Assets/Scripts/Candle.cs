using UnityEngine;

public class Candle : Flammable
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Matchstick2>() != null)
        {
            var matchstick = other.GetComponent<Matchstick2>();
            if (matchstick.IsOnFire)
            {
                Ignite();
            }
        }
    }
}
