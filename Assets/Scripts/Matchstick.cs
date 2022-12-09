using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Matchstick : MonoBehaviour
{
    [Header("Fire Animation")]
    public GameObject Fire_Animation_Of_Match;
    public GameObject Fire_Animation_Of_Candle;
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

    private void Start()
    {
        Application.targetFrameRate = 60;

        //Match fire animation is deactivated at first
        Fire_Animation_Of_Match.active = false;
        Fire_Animation_Of_Candle.active = false;
    }

    void OnCollisionEnter(Collision collision)
    {

        //Check for a match with the specified name on any GameObject that collides with your GameObject
        if (collision.gameObject.name == "Matchbox")
        {
            //There is a collision between matchstick and the matchbox
            Is_Colliding_With_Match = true;
            Debug_Text.text = "There is COLLISION";
        }

        if (collision.gameObject.name == "Candle" && AmIOnFire)
        {

            Second_Coordinates = collision.transform.position;
            Fire_Animation_Of_Candle.active = true;
        }
    }
    void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.name == "Matchbox")
        {
            //There is no collision
            Is_Colliding_With_Match = false;
            _isFirstButtonPressed = false;

            Debug_Text.text = "There is no collision";
        }
    }

    private int _TimeCountForSecound = 0;
    // Update is called once per frame
    void Update() //60 times in a secound
    {

        //Global Game Time
        _TimeCountForSecound++;
        if(_TimeCountForSecound > 60)
        {
            _TimeCountForSecound = 0;
            seconds++;
        }



        //On click
        if (OVRInput.Get(OVRInput.Button.One))
        {

            //Debug_Text.text = "";

            if (Is_Colliding_With_Match && _isFirstButtonPressed == false) //First press
            {
                //Debug_Text.text = "First Button Pressed";

                //Take controller coordinates
                First_Coordinates = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch);

                //Take Timer
                _firstTime = this.seconds;

                //Bool
                _isFirstButtonPressed = true;
            }
            else if (Is_Colliding_With_Match && _isFirstButtonPressed == true) //Secound press
            {
                //Debug_Text.text += " \n First Button Pressed";
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

                Speed = (Distance_Difference / Time_Differece) * 1000;
                //Debug_Text.text += " \n Speed : " + Speed.ToString();

                //If speed is enough
                if (Speed < 11)
                {
                    //Debug_Text.text += "Im on fire";
                    LightTheMatch();
                }
          
            }

        }

        if(Is_Colliding_With_Match == false)
        {
            _firstTime = 0;
            _secondTime = 0;
            First_Coordinates = new Vector3(0,0,0);
            Second_Coordinates = new Vector3(0, 0, 0);
        }
    }

    public void LightTheMatch()
    {
        //Light the match
        AmIOnFire = true;

        //Init fire animation
        Fire_Animation_Of_Match.active = true;

    }
}


