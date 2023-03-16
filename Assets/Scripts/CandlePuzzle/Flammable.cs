using System.Collections.Generic;
using UnityEngine;

namespace CandlePuzzle
{
    public enum FlameColour
    {
        White,
        Red,
        Green,
        Blue,
        Orange,
        Purple,
        Yellow
    }

    public abstract class Flammable : MonoBehaviour
    {
        [SerializeField] private FlameColour flameColour;
        [SerializeField] private ParticleSystem firePS;
        [SerializeField] private Light lightSource;
        [SerializeField] private List<GameObject> lightVolumes;
        private Vector3 _startPosition;
        private bool _isOnFire;

        private readonly Dictionary<FlameColour, Color> _flameColourDictionary = new()
        {
            {FlameColour.White, Color.white},
            {FlameColour.Red, Color.red},
            {FlameColour.Green, Color.green},
            {FlameColour.Blue, Color.cyan},
            {FlameColour.Orange, new Color(1,0.1265772f,0)}, // Yes it's orange for some reason
            {FlameColour.Purple, new Color(0.5f, 0, 1)},
            {FlameColour.Yellow, Color.yellow}
        };

        private void OnValidate()
        {
            firePS.startColor = _flameColourDictionary[flameColour];
            lightSource.color = _flameColourDictionary[flameColour];
        }

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
            firePS.startColor = _flameColourDictionary[flameColour];
            lightSource.color = _flameColourDictionary[flameColour];
            firePS.Play();
            lightSource.enabled = true;
            lightVolumes.ForEach(ctx => ctx.SetActive(true));
            _isOnFire = true;
        }

        public virtual void Extinguish()
        {
            firePS.Stop();
            lightSource.enabled = false;
            lightVolumes.ForEach(ctx => ctx.SetActive(false));
            _isOnFire = false;
        }

        public void SetFlameColour(FlameColour colour) => flameColour = colour;
        public FlameColour GetFlameColour() => flameColour;

        public bool IsOnFire() => _isOnFire;
    }
}