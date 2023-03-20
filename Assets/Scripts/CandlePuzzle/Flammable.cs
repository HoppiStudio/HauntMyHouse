using System.Collections.Generic;
using UnityEngine;

namespace CandlePuzzle
{
    public enum FlameColour
    {
        White,
        Red,
        Green,
        DarkBlue,
        Cyan,
        Yellow,
        Orange,
        Purple,
        Pink
    }

    public abstract class Flammable : MonoBehaviour
    {
        [SerializeField] private FlameColour flameColour;
        [SerializeField] private ParticleSystem firePS;
        [SerializeField] private Light lightSource;
        [SerializeField] private List<GameObject> lightVolumes;
        private AudioSource _fireIgniteSound;
        private Vector3 _startPosition;
        private bool _isOnFire;

        private readonly Dictionary<FlameColour, Color> _flameColourDictionary = new()
        {
            {FlameColour.White, Color.white},
            {FlameColour.Red, Color.red},
            {FlameColour.Green, Color.green},
            {FlameColour.DarkBlue, new Color(0, 0.045f, 1)},
            {FlameColour.Cyan, Color.cyan},
            {FlameColour.Yellow, Color.yellow},
            {FlameColour.Orange, new Color(1, 0.1265772f, 0)}, // weird but it's orange
            {FlameColour.Purple, new Color(0.057f, 0, 1)}, // weird but it's purple
            {FlameColour.Pink, Color.magenta}
        };

        private void OnValidate()
        {
            firePS.startColor = _flameColourDictionary[flameColour];
            lightSource.color = _flameColourDictionary[flameColour];
        }

        protected virtual void Awake() => _fireIgniteSound = GetComponent<AudioSource>();

        protected virtual void Start() => _startPosition = transform.position;

        protected virtual void Update()
        {
            if (transform.position.y <= 0.5f)
            {
                transform.position = _startPosition;
            }
        }

        protected virtual void OnTriggerEnter(Collider other)
        {
            if (other.GetComponent<Flammable>() != null)
            {
                // If this object is on fire, ignite other unlit flammable objects 
                var otherFlammable = other.GetComponent<Flammable>();
                if (!otherFlammable._isOnFire && _isOnFire)
                {
                    otherFlammable.flameColour = flameColour;
                    otherFlammable.Ignite();
                }
            }
        }

        public virtual void Ignite()
        {
            _fireIgniteSound.Play();
            firePS.startColor = _flameColourDictionary[flameColour];
            lightSource.color = _flameColourDictionary[flameColour];
            firePS.Play();
            lightSource.enabled = true;
            //lightVolumes.ForEach(ctx => ctx.SetActive(true));
            _isOnFire = true;
        }

        public virtual void Extinguish()
        {
            firePS.Stop();
            lightSource.enabled = false;
            //lightVolumes.ForEach(ctx => ctx.SetActive(false));
            _isOnFire = false;
        }

        public void SetFlameColour(FlameColour colour) => flameColour = colour;
        public FlameColour GetFlameColour() => flameColour;

        public bool IsOnFire() => _isOnFire;
    }
}