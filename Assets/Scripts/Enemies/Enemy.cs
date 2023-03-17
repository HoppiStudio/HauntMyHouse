using System;
using System.Collections.Generic;
using UnityEngine;

namespace Enemies
{
    public abstract class Enemy : MonoBehaviour
    {
        [SerializeField] private EnemyData enemyData;
        private StateMachine _stateMachine = new();
        private Dictionary<Type, IState> _cachedStatesDict;

        private void Awake()
        {
            _cachedStatesDict = new Dictionary<Type, IState>
            {
                {typeof(EnemyIdleState), new EnemyIdleState(this, _stateMachine)},
                {typeof(EnemyHauntState), new EnemyHauntState(this, _stateMachine)},
            };
            _stateMachine.SetStates(_cachedStatesDict);
            _stateMachine.ChangeState(typeof(EnemyIdleState));
        }

        private void Update()
        {
            _stateMachine.Update();
        }
    }
}
