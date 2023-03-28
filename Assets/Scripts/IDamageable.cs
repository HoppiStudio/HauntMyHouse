public interface IDamageable
{
    public int Health { get; }
    public void TakeDamage(int amount);
}
