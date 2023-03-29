using Puzzles;
using UnityEngine;

public class Player : MonoBehaviour, IDamageable
{
    public int Health { get; private set; }

    private void Start() => Health = 100;

    public void TakeDamage(int amount)
    {
        Health -= amount;
    }

    public int PuzzlesCompleted()
    {
        return PuzzleManager.PuzzlesCompleted;
    }
}
