using UnityEngine;

[CreateAssetMenu(fileName = "NewEnemyData", menuName = "Scriptables/EnemyData", order = 1)]
public class EnemyData : ScriptableObject
{
    public string name;
    public int health;
    public GameObject prefab;
}
