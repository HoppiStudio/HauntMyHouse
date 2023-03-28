namespace Enemies
{
    public class GhostRetreatingState : IState
    {
        private Enemy _enemy;
        private StateMachine _stateMachine;
    
        public GhostRetreatingState(Enemy enemy, StateMachine stateMachine)
        {
            _enemy = enemy;
            _stateMachine = stateMachine;
        }
    
        public void OnStateEnter() {}

        public void OnStateUpdate()
        {
            // if enemy reaches retreated position, observe player
            //    _stateMachine.ChangeState(typeof(GhostObservingState));
        }

        public void OnStateExit() {}
    }
}