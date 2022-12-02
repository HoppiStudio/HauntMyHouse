using System;
using System.Collections;
using System.Collections.Generic;
using AiDirector.Scripts.RulesSystem.RuleCalculators;
using AiDirector.Scripts.Template;
using UnityEngine;

namespace AiDirector.Scripts
{
    public class Director : MonoBehaviour
    {
        public static Director Instance;

        private enum Difficulty
        {
            Easy = 0, 
            Normal = 1,
            Hard = 2
        }
        [SerializeField] private Difficulty difficulty;

        [Header("INTENSITY")]
        [SerializeField] private float intensityCalculationRate = 1.0f;

        [Header("TEMPO")]
        [SerializeField] [Range(70, 100)] private int peakIntensityThreshold;
        [Space]
    
        [Tooltip("Default value, but can be dynamically altered by the Director")]
        [SerializeField] private float defaultPeakDuration;
        [SerializeField] private float defaultRespiteDuration;
        [Space]
        [SerializeField] private int maxBuildUpPopulation;
        [SerializeField] private int maxPeakPopulation;
        [SerializeField] private int maxRespitePopulation;

        [Header("ENEMY DATA")]
        [HideInInspector] public List<GameObject> activeEnemies = new List<GameObject>();
        [HideInInspector] public int maxPopulationCount;
        
        [Header("PLAYER DATA")]
        [SerializeField] private Player player;
        
        private StateMachine _stateMachine = new StateMachine();
        private Dictionary<Type, IState> _cachedIntensityStatesDict;
        
        private DirectorIntensityCalculator _intensityCalculator = new DirectorIntensityCalculator();
        private DirectorBehaviourCalculator _behaviourCalculator = new DirectorBehaviourCalculator();
        
        private float _perceivedIntensity;
        private float _timeSpentInPeak;
        private float _timeSpentInRespite;
        private int _intensityScaler;

        /*private void TriggerGameEvent()
        {
            _behaviourCalculator.CalculateBehaviourOutput(this);
        }*/

        private void Awake()
        {
            if (Instance == null) { Instance = this; }
            else { Debug.LogError("Only one instance of the Director should exist at any one time"); }
        }

        private void Start()
        {
            _cachedIntensityStatesDict = new Dictionary<Type, IState>
            {
                { typeof(DirectorBuildUpState), new DirectorBuildUpState(this)},
                { typeof(DirectorPeakState), new DirectorPeakState(this)},
                { typeof(DirectorPeakState), new DirectorPeakFadeState(this)},
                { typeof(DirectorRespiteState), new DirectorRespiteState(this)}
            };
            _stateMachine.ChangeState(_cachedIntensityStatesDict[typeof(DirectorRespiteState)]);
            
            switch (difficulty)
            {
                case Difficulty.Easy:
                    _intensityScaler = 30;
                    break;
                case Difficulty.Normal:
                    _intensityScaler = 60;
                    break;
                case Difficulty.Hard:
                    _intensityScaler = 90;
                    break;
            }
        }

        private void Update()
        {
            _stateMachine.Update();
        }

        //public float GetEnemyPopulationCount() => _activeAreaSet.GetEnemyPopulationCount();

        public float GetPerceivedIntensity() => _perceivedIntensity;

        public Player GetPlayer() => player;

        public float GetPeakDuration() => _timeSpentInPeak;

        public float GetRespiteDuration() => _timeSpentInRespite;
        
        public float GetIntensityCalculationRate() => intensityCalculationRate;

        public int GetIntensityScalar() => _intensityScaler;

        public IEnumerator IncreasePerceivedIntensity()
        {
            float intensity = _intensityCalculator.CalculatePerceivedIntensityOutput(this);
            _perceivedIntensity += intensity * _intensityScaler * Time.deltaTime;
            
            if (_perceivedIntensity > 100)
            {
                _perceivedIntensity = 100;
            }
            
            yield return new WaitForSeconds(intensityCalculationRate);
        }

        public IEnumerator DecreasePerceivedIntensity()
        {
            float intensity = _intensityCalculator.CalculatePerceivedIntensityOutput(this);
            _perceivedIntensity -= intensity * _intensityScaler * Time.deltaTime;
            
            if (_perceivedIntensity < 0)
            {
                _perceivedIntensity = 0;
            }
            
            yield return new WaitForSeconds(intensityCalculationRate);
        }

        public void AddEnemy(GameObject enemy)
        {
            activeEnemies.Add(enemy);
        }
    
        public void RemoveEnemy(GameObject enemy)
        {
            activeEnemies.Remove(enemy);
        }
    }
}

