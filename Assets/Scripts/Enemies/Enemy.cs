using System;
using System.Collections.Generic;
using UnityEngine;

namespace Enemies
{
    public abstract class Enemy : MonoBehaviour, IDamageable
    {
        [SerializeField] private EnemyData enemyData;
        private readonly StateMachine _stateMachine = new();
        private Dictionary<Type, IState> _cachedStatesDict;

        private void Awake()
        {
            _cachedStatesDict = new Dictionary<Type, IState>
            {
                {typeof(GhostObservingState), new GhostObservingState(this, _stateMachine)},
                {typeof(GhostAggressiveState), new GhostAggressiveState(this, _stateMachine)},
                {typeof(GhostRetreatingState), new GhostRetreatingState(this, _stateMachine)}
            };
            _stateMachine.SetStates(_cachedStatesDict);
            _stateMachine.ChangeState(typeof(GhostObservingState));
        }

        private void Update()
        {
            _stateMachine.Update();
        }

        private void OnTriggerEnter(Collider other)
        {
            IDamageable hit = other.GetComponent<IDamageable>();
            if (hit != null)
            {
                hit.TakeDamage(enemyData.damage);
            }
        }

        public void MoveTowards(Vector3 position)
        {
            
        }

        public void TakeDamage(float amount)
        {
            enemyData.health -= (int)amount;
        }
    }
}
