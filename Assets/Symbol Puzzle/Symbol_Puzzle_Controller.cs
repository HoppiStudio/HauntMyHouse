using System.Collections;
using System.Collections.Generic;
using Puzzles;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class Symbol_Puzzle_Controller : Puzzle
{
    public GameObject Symbol_Puzzle_All;
    public int TotalValue = 0;

    public GameObject Symbol_1;
    public GameObject Symbol_2;
    public GameObject Symbol_3;
    public GameObject Symbol_4;
    public GameObject Symbol_5;
    public GameObject Symbol_6;
    public GameObject Symbol_7;
    public GameObject Symbol_8;
    public GameObject Symbol_9;


    public Symbol_Socket Socket_1;
    public Symbol_Socket Socket_2;
    public Symbol_Socket Socket_3;

    public Symbol_Game_Card Card_1;
    public Symbol_Game_Card Card_2;
    public Symbol_Game_Card Card_3;
    public Symbol_Game_Card Card_4;
    public Symbol_Game_Card Card_5;

    public Texture2D Card_Image_1_Points;
    public Texture2D Card_Image_2_Points;
    public Texture2D Card_Image_3_Points;
    public Texture2D Card_Image_4_Points;
    public Texture2D Card_Image_5_Points;
    public Texture2D Card_Image_6_Points;

    public bool Ghost_Banished_by_Symbol_Puzzle = false;

    private void Start()
    {
        int x = Random.Range(1, 10);
        Debug.Log("Randomized Section : " + x);
        // Puzzle           Solution
        // 1 3 2 1 3 = 10        ( 3 5 2 )               - 1 -
        if(x == 1)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);

            TotalValue = 10;

        }


        // 2 4 4 1 1 = 12       ( 2 4 6 )               - 2 -
        if (x == 2)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);

            TotalValue = 12;
        }

        // 1 3 1 5 5 = 15        ( 9 5 1 )               - 3 -
        if (x == 3)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_5_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_5_Points);

            TotalValue = 15;
        }

        // 1 5 4 2 4 = 16        ( 8 2 6 )               - 4 -
        if (x == 4)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_5_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);

            TotalValue = 16;
        }

        // 3 2 4 1 2 = 11        ( 5 4 3 )               - 5 -
        if (x == 5)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);

            TotalValue = 11;
        }

        // 2 6 1 3 4  = 16        ( 3 7 6 )               - 6 -
        if (x == 6)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_6_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);

            TotalValue = 9;
        }

        // 1 5 1 4 2 = 13        ( 4 6 3 )               - 7 -
        if (x == 7)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_5_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);

            TotalValue = 13;
        }

        // 2 5 1 4 3= 15        ( 8 1 6 )               - 8 -
        if (x == 8)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_5_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_4_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);

            TotalValue = 15;
        }

        // 3 1 2 1 2  = 9        ( 1 3 5 )               - 9 -
        if (x == 9)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);

            TotalValue = 9;
        }

        // 1 3 6 3 2 = 14        ( 4 9 1 )               - 10 -
        if (x == 10)
        {
            Card_1.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_1_Points);
            Card_2.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_3.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_6_Points);
            Card_4.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_3_Points);
            Card_5.GetComponent<Renderer>().material.SetTexture("_BaseMap", Card_Image_2_Points);

            TotalValue = 14;
        }

    }



    private void Update()
    {
        //Win State
        if(TotalValue == Socket_1.Socket_Number + Socket_2.Socket_Number + Socket_3.Socket_Number) 
        {

                //ghostController.Purple_Ghost_Banishment_Rules = true; -> Comented out
                Card_1.Card_Number = Card_1.Card_Number + 100;
                Ghost_Banished_by_Symbol_Puzzle = true;


                //Sucsessfully Completed
                Complete();

        }

        
        if(TotalValue != 0 && TotalValue == Socket_1.Socket_Number + Socket_2.Socket_Number + Socket_3.Socket_Number) {
            //Wrong Placement
            Symbol_Puzzle_All.SetActive(false);



        }
    }
}
