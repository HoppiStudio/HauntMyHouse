public class EnemyIdleState : IState
{
    private Enemy _enemy;
    private StateMachine _stateMachine;
    
    public EnemyIdleState(Enemy enemy, StateMachine stateMachine)
    {
        _enemy = enemy;
        _stateMachine = stateMachine;
    }
    
    public void OnStateEnter() {}

    public void OnStateUpdate() {}

    public void OnStateExit() {}
}
