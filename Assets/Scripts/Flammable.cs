using UnityEngine;

public abstract class Flammable : MonoBehaviour
{
    [SerializeField] private ParticleSystem flammableEffectPS;
    private GameObject _fireEffectContainer;

    private void Start()
    {
        _fireEffectContainer = flammableEffectPS.transform.parent.gameObject;
        flammableEffectPS.Stop();
        _fireEffectContainer.SetActive(false);
    }

    public void Ignite()
    {
        _fireEffectContainer.SetActive(true);
        flammableEffectPS.Play();
    }

    public void Extinguish()
    {
        flammableEffectPS.Stop();
        _fireEffectContainer.SetActive(false);
    }
}
