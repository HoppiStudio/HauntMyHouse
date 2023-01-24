using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ghost_Damage : MonoBehaviour
{
    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            var Player_HP = collision.gameObject.GetComponent<IDamageable>();
            Player_HP.Rechieve_Damage();
            Destroy(this.gameObject);
        }

    }
}
