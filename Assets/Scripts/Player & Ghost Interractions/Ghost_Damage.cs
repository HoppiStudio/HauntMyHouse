using UnityEngine;

public class Ghost_Damage : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            var Player_HP = other.GetComponent<IDamageable>();
            Player_HP.TakeDamage(0);
            Destroy(this.gameObject);
        }
    }
}
