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
        private Dictionary<Difficulty, float> _intensityModifierDict;

        [Header("INTENSITY")] [SerializeField] private float intensityCalculationRate = 1.0f;

        [Header("TEMPO")] [SerializeField] [Range(70, 100)]
        private int peakIntensityThreshold;

        [Space] [Tooltip("Default value, but can be dynamically altered by the Director")] [SerializeField]
        private float defaultPeakDuration;

        [SerializeField] private float defaultRespiteDuration;
        [Space] [SerializeField] private int maxBuildUpPopulation;
        [SerializeField] private int maxPeakPopulation;
        [SerializeField] private int maxRespitePopulation;

        [Header("ENEMY DATA")] [SerializeField]
        private List<GameObject> activeEnemies = new();
        [SerializeField] private int maxPopulationCount;

        [Header("PLAYER DATA")] [SerializeField]
        private Player player;

        public float RespiteDuration { get; set; }
        public float PeakDuration { get; set; }
        public int MaxPopulationCount { get; set; }

        private readonly StateMachine _stateMachine = new();
        private Dictionary<Type, IState> _cachedIntensityStatesDict;

        private readonly DirectorIntensityCalculator _intensityCalculator = new();
        private float _perceivedIntensity;

        private void OnEnable() => _stateMachine.OnStateChanged += StateMachineOnStateChangedEvent;
        private void OnDisable() => _stateMachine.OnStateChanged -= StateMachineOnStateChangedEvent;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            else
            {
                Debug.LogError("Only one instance of the Director should exist at any one time");
            }
        }

        private void Start()
        {
            RespiteDuration = defaultRespiteDuration;
            PeakDuration = defaultPeakDuration;

            _cachedIntensityStatesDict = new Dictionary<Type, IState>
            {
                {typeof(DirectorRespiteState), new DirectorRespiteState(this, _stateMachine)},
                {typeof(DirectorBuildUpState), new DirectorBuildUpState(this, _stateMachine)},
                {typeof(DirectorPeakState), new DirectorPeakState(this, _stateMachine)},
                {typeof(DirectorPeakFadeState), new DirectorPeakFadeState(this, _stateMachine)}
            };
            _stateMachine.SetStates(_cachedIntensityStatesDict);
            _stateMachine.ChangeState(typeof(DirectorRespiteState));

            _intensityModifierDict = new Dictionary<Difficulty, float>
            {
                {Difficulty.Easy, 30},
                {Difficulty.Normal, 60},
                {Difficulty.Hard, 90}
            };
        }

        private void Update()
        {
            _stateMachine.Update();
        }

        public void IncreasePerceivedIntensity() => StartCoroutine(IncreasePerceivedIntensityCoroutine());
        public void DecreasePerceivedIntensity() => StartCoroutine(DecreasePerceivedIntensityCoroutine());

        private IEnumerator IncreasePerceivedIntensityCoroutine()
        {
            float intensity = _intensityCalculator.CalculatePerceivedIntensityOutput(this);
            _perceivedIntensity += intensity * _intensityModifierDict[difficulty] * Time.deltaTime;

            if (_perceivedIntensity > 100)
            {
                _perceivedIntensity = 100;
            }

            yield return new WaitForSeconds(intensityCalculationRate);
        }

        private IEnumerator DecreasePerceivedIntensityCoroutine()
        {
            float intensity = _intensityCalculator.CalculatePerceivedIntensityOutput(this);
            _perceivedIntensity -= intensity * _intensityModifierDict[difficulty] * Time.deltaTime;

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
        
        private void StateMachineOnStateChangedEvent()
        {
            DirectorEventBus.Publish(DirectorEvent.EnteredNewState);
        }

        public Player GetPlayer() => player;

        public IState GetDirectorState() => _stateMachine.GetCurrentState();

        public float GetPeakIntensityThreshold() => peakIntensityThreshold;
        public float GetDefaultRespiteDuration() => defaultRespiteDuration;
        public float GetDefaultPeakDuration() => defaultPeakDuration;

        public float GetEnemyPopulationCount() => activeEnemies.Count;
        public int GetMaxRespitePopulation() => maxRespitePopulation;
        public int GetMaxBuildUpPopulation() => maxBuildUpPopulation;
        public int GetMaxPeakPopulation() => maxPeakPopulation;

        public float GetPerceivedIntensity() => _perceivedIntensity;
        public float GetIntensityCalculationRate() => intensityCalculationRate;
        public float GetIntensityScalar() => _intensityModifierDict[difficulty];
    };
    
    public enum DirectorEvent
    {
        EnteredNewState,
        EnteredRespiteState,
        EnteredBuildUpState,
        EnteredPeakState,
        EnteredPeakFadeState,
        ReachedPeakIntensity
    }
}

