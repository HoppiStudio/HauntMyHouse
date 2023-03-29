using UnityEngine;

namespace Enemies
{
    [CreateAssetMenu(fileName = "NewEnemyData", menuName = "Scriptables/EnemyData", order = 1)]
    public class EnemyData : ScriptableObject
    {
        public string enemyName;
        public int health;
        public int damage;
        public float speed;
    }
}
