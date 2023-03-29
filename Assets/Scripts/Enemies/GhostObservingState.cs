using UnityEngine;

namespace Enemies
{
    public class GhostObservingState : IState
    {
        private Enemy _enemy;
        private StateMachine _stateMachine;
        private float _timeElapsed;

        public GhostObservingState(Enemy enemy, StateMachine stateMachine)
        {
            _enemy = enemy;
            _stateMachine = stateMachine;
            _timeElapsed = 0f;
        }
    
        public void OnStateEnter() {}

        public void OnStateUpdate()
        {
            _timeElapsed += Time.deltaTime;

            if (_timeElapsed >= 150f)
            {
                _stateMachine.ChangeState(typeof(GhostAggressiveState));
            }
        }

        public void OnStateExit() => _timeElapsed = 0;
    }
}