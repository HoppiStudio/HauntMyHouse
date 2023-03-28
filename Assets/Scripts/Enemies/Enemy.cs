using System;
using System.Collections.Generic;
using UnityEngine;

namespace Enemies
{
    public abstract class Enemy : MonoBehaviour, IDamageable
    {
        public int Health { get; protected set; }
        public IState CurrentState => _stateMachine.CurrentState;

        [SerializeField] private EnemyData enemyData;
        private readonly StateMachine _stateMachine = new();

        private void Awake()
        {
            var statesDict = new Dictionary<Type, IState>
            {
                {typeof(GhostObservingState), new GhostObservingState(this, _stateMachine)},
                {typeof(GhostAggressiveState), new GhostAggressiveState(this, _stateMachine)},
                {typeof(GhostRetreatingState), new GhostRetreatingState(this, _stateMachine)}
            };
            _stateMachine.SetStates(statesDict);
            _stateMachine.ChangeState(typeof(GhostObservingState));
        }

        private void Start() => Health = enemyData.health;

        private void Update() => _stateMachine.Update();

        private void OnTriggerEnter(Collider other)
        {
            IDamageable hit = other.GetComponent<IDamageable>();
            if (hit != null)
            {
                hit.TakeDamage(enemyData.damage);
            }
        }

        public void MoveTowards(Vector3 targetPos) => Vector3.MoveTowards(transform.position, targetPos, enemyData.speed);

        public void TakeDamage(int amount) => Health -= amount;
        
        public void NextState()
        {
            _stateMachine.NextState();
        }
    }
}
