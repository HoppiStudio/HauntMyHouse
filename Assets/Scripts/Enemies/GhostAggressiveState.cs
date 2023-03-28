using AiDirector;

namespace Enemies
{
    public class GhostAggressiveState : IState
    {
        private Enemy _enemy;
        private StateMachine _stateMachine;
    
        public GhostAggressiveState(Enemy enemy, StateMachine stateMachine)
        {
            _enemy = enemy;
            _stateMachine = stateMachine;
        }
    
        public void OnStateEnter() {}

        public void OnStateUpdate()
        {
            //_enemy.MoveTowards(Director.Instance.GetPlayerLocation());

            // If enemy reaches player and doesn't die, retreat
            //    _stateMachine.ChangeState(typeof(GhostRetreatingState));
        }

        public void OnStateExit() {}
    }
}