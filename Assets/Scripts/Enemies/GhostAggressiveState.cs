using AiDirector;
using UnityEngine;

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
            _enemy.MoveTowards(Director.Instance.GetPlayerLocation());

            if (_enemy.IsInPlayerBounds())
            {
                _stateMachine.ChangeState(typeof(GhostRetreatingState));
            }
        }

        public void OnStateExit() {}
    }
}