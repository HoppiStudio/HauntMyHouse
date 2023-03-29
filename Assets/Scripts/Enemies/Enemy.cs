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
        private Vector3 _startPos;
        private bool _isCollidingWithPlayer; // temporary

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

        private void Start()
        {
            Health = enemyData.health;
            _startPos = transform.position;
        }

        private void Update() => _stateMachine.Update();

        private void OnTriggerEnter(Collider other)
        {
            IDamageable hit = other.GetComponent<IDamageable>();
            if (hit != null)
            {
                hit.TakeDamage(enemyData.damage);
            }

            if (other.GetComponent<Player>() != null)
            {
                _isCollidingWithPlayer = true;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.GetComponent<Player>() != null)
            {
                _isCollidingWithPlayer = false;
            }
        }

        public void MoveTowards(Vector3 targetPos)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetPos, enemyData.speed * Time.deltaTime);
        }

        public Vector3 SpawnPosition() => _startPos;

        public bool IsInPlayerBounds() => _isCollidingWithPlayer;

        public void TakeDamage(int amount) => Health -= amount;
        
        public void NextState()
        {
            _stateMachine.NextState();
        }
    }
}
