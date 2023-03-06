using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    //public BlockoutManager blockoutTool;
    public GameObject ContinueCanvas;
    public GameObject GameWonCanvas;
    public GameObject GameLostCanvas;

    public GameObject rayInteractor;

    public GameObject candlePuzzle;
    public GameObject glyphPuzzle;
    public GameObject leverPuzzle;

    //puzzlesToLoad list

    public void continueBtn()
    {
        //blockoutTool.DisableBlockout();

        ContinueCanvas.SetActive(false);
        rayInteractor.SetActive(false);

        candlePuzzle.SetActive(true);
        glyphPuzzle.SetActive(true);
        leverPuzzle.SetActive(true);



        //create a random puzzle object (First puzzle)
        //remove first puzzle from the puzzlesToLoad list


        //Something is done

        //disable second puzzle and load third one by choosing a random one from the remaining ones on the list
        //remove second puzzle from the puzzlesToLoad list

        //something is done

        //disable third puzzle
        //remove third puzzle from the puzzlesToLoad list

        //in the meantime check player life
        //If player life is still full do GameWonCanvas.SetActive(true);
        //If player life is empty do GameWonCanvas.SetActive(true)
    }

}
