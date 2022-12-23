using System;
using TMPro;
using UnityEngine;

public class Matchstick2 : MonoBehaviour
{
    public bool IsOnFire => _isOnFire;
    
    [SerializeField] private Collider matchBoxCollider;
    [SerializeField] private ParticleSystem fireEffectPS;
    [SerializeField] private ParticleSystem smokeEffectPS;
    [Space]
    [SerializeField] private TMP_Text debugText;
    private bool _isOnFire;
    private bool _isColliding;
    
    private void Start()
    {
        debugText.text = "Hello there!";
        fireEffectPS.Stop();
        smokeEffectPS.Stop();
    }

    private void Update()
    {
       if (!_isColliding) return;
       
       debugText.text = "Press A to light the match";
        
        if (OVRInput.GetDown(OVRInput.Button.One) && !_isOnFire)
        {
            fireEffectPS.Play();
            smokeEffectPS.Play();
            _isOnFire = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Collider>() == matchBoxCollider)
        {
            _isColliding = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GetComponent<Collider>() == matchBoxCollider)
        {
            _isColliding = false;
        }
    }
}
