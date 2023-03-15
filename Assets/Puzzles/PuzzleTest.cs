using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PuzzleTest : MonoBehaviour
{
    //[SerializeField] private Puzzle puzzle;


    public GameObject BlockoutCanvas;
    public GameObject GameOverCanvas;
    public GameObject rayInteractor;


    public GameObject candlePuzzle;
    public GameObject glyphPuzzle;
    public GameObject leverPuzzle;

    private GameObject selectedPuzzle;

    private List<GameObject> puzzlesToSpawn;


//After Continue button is pressed, adds all puzzles to the list and spawns a random puzzle
public void addPuzzlesToListAndSpawnPuzzle()
    {
        //Disables canvas and ray interactor
        BlockoutCanvas.SetActive(false);
        rayInteractor.SetActive(false);

        puzzlesToSpawn.Add(candlePuzzle);
        puzzlesToSpawn.Add(glyphPuzzle);
        puzzlesToSpawn.Add(leverPuzzle);

        Debug.Log(puzzlesToSpawn);

        spawnPuzzle();
    }

    //Call this function when a puzzle is completed
    public void selectRandomPuzzle()
    {
        //Goes through each puzzle in the list and selects a random one. Removes it from the list and selects another puzzle
        if (puzzlesToSpawn.Count != 0)
        {
            //Destroy and remove puzzle from list
            selectedPuzzle.SetActive(false);
            puzzlesToSpawn.Remove(selectedPuzzle);

            //Spawn puzzle
            spawnPuzzle();
        }
        //No more puzzles in list - Game won
        else
        {
            //Enables canvas and ray interactor
            GameOverCanvas.SetActive(true);
            rayInteractor.SetActive(true);
        }
    }


    private void spawnPuzzle()
    {
        int r = UnityEngine.Random.Range(1, 2);

        Debug.Log(r);

        GameObject selectedPuzzle = ((GameObject)puzzlesToSpawn[r]);
        Debug.Log(selectedPuzzle);

        selectedPuzzle.SetActive(true);
    }



    void Start()
    {
        //puzzle.OnPuzzleComplete += BanishGhost;
    }

    private void Update()
    {

    }

    private void BanishGhost()
    {
        Debug.Log(this + " check");
    }

    /*private void OnDisable()
    {
        //puzzle.OnPuzzleComplete -= BanishGhost;
    }*/
}
