using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Matchstick : MonoBehaviour
{
    //Am i on fire 
    public bool AmIOnFire = false;

    //Debug Text 
    [SerializeField] public TMP_Text Debug_Text;

    //Game timer
    float timer = 0.0f;

    public bool Is_Colliding_With_Match = false;

    //Game time in secounds
    int seconds = 0;

    // First initilizations for the coordinates and time
    private bool _isFirstButtonPressed = false;
    private int _firstTime;
    public Vector3 First_Coordinates;

    //Second inits and coordinates
    private bool _isSecondButtonPressed = false;
    private int _secondTime;
    public Vector3 Second_Coordinates;



    void OnCollisionEnter(Collision collision)
    {

        //Check for a match with the specified name on any GameObject that collides with your GameObject
        if (collision.gameObject.name == "(!)Matchbox")
        {
            //There is a collision between matchstick and the matchbox
            Is_Colliding_With_Match = true;
        }
        else
        {
            //There is no collision
            Is_Colliding_With_Match = false;
            _isFirstButtonPressed = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        //Global Game Time
        timer += Time.deltaTime;
        seconds = (int)(timer / 60);

        Debug.Log("Gametime in secounds : " + seconds);

        //On click
        if (OVRInput.Get(OVRInput.Button.One))
        {
            if (Is_Colliding_With_Match && _isFirstButtonPressed == false) //First press
            {
                //Take controller coordinates
                First_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);

                //Take Timer
                _firstTime = this.seconds;

                //Bool
                _isFirstButtonPressed = true;
            }
            else if (Is_Colliding_With_Match && _isFirstButtonPressed == true) //Secound press
            {

                //Take controller coordinates
                Second_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);

                //Take Timer
                _secondTime = this.seconds;

                //Bool
                _isSecondButtonPressed = true;

                //Speed Calculation
                float Speed = 0;
                float Distance_Difference = Vector3.Distance(First_Coordinates, Second_Coordinates);
                float Time_Differece = _secondTime - _firstTime;

                Speed = Distance_Difference / Time_Differece;


                //If speed is enough
                if (Speed > 5)
                {
                    LightTheMatch();
                }
          
            }

        }
    }

    public void LightTheMatch()
    {
        //Light the match
        AmIOnFire = true;

        //Init fire animation

    }
}

