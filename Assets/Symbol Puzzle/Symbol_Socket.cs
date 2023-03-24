using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Symbol_Socket : MonoBehaviour
{
    public int Socket_Number = 0;
    public AudioClip End_Clip;
    public GameObject Fire_Effect_Prefab;
    GameObject Fire_Effect;
    public bool Symbol_Attached = false;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Symbol"))
        {
            Symbol_Attached = true;
            //Debug.Log("Collision with Symbol");
            other.transform.position = this.transform.position;
            this.Socket_Number = other.GetComponent<Symbol>().Symbol_Number;
            other.GetComponent<Collider>().enabled = false;
            this.GetComponent<Collider>().enabled = false;
            other.GetComponent<XRGrabInteractable>().enabled = false;
            this.GetComponent<Renderer>().material.SetColor("_Color", Color.red);

            Fire_Effect = Instantiate(Fire_Effect_Prefab, this.transform.position, this.transform.rotation);
            //Fire_Effect.GetComponent<ParticleSystem>().startColor = Color.red;


            AudioSource Backtorund_AudioSource = GameObject.Find("Symbol Puzzle Efect").GetComponent<AudioSource>();
            Backtorund_AudioSource.PlayOneShot(End_Clip);
        }
    }

    private void Update()
    {
        if(this.enabled == false && Fire_Effect != null)
        {
            Fire_Effect.SetActive(false);
        }
        else if( Fire_Effect != null)
        {
            Fire_Effect.SetActive(true);
        }
    }
}
