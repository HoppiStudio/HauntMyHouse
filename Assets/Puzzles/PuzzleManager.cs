using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PuzzleManager : MonoBehaviour
{
    //[SerializeField] private Puzzle puzzle;

    public GameObject BlockoutCanvas;
    public GameObject GameOverCanvas;
    public GameObject rayInteractor;

/*    public GameObject candlePuzzle;
    public GameObject glyphPuzzle;
    public GameObject leverPuzzle;*/

    private GameObject currentPuzzle;

    [SerializeField] private List<GameObject> puzzlePrefabs;


//After Continue button is pressed, adds all puzzles to the list and spawns a random puzzle
public void spawnFirstPuzzle()
    {
        //Disables canvas and ray interactor
        BlockoutCanvas.SetActive(false);
        rayInteractor.SetActive(false);

        /*puzzlePrefabs.Add(candlePuzzle);
        puzzlePrefabs.Add(glyphPuzzle);
        puzzlePrefabs.Add(leverPuzzle);*/

        Debug.Log("Puzzle prefabs: " + puzzlePrefabs);

        spawnPuzzle();
    }

    //Call this function when a puzzle is completed
    public void selectRandomPuzzle()
    {
        //Goes through each puzzle in the list and selects a random one. Removes it from the list and selects another puzzle
        if (puzzlePrefabs.Count != 0)
        {
            //Destroy and remove puzzle from list
            currentPuzzle.SetActive(false);
            Destroy(currentPuzzle);
            puzzlePrefabs.Remove(currentPuzzle);
            Debug.Log("Puzzle prefabs: " + puzzlePrefabs);

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
        int r = Random.Range(0, puzzlePrefabs.Count);

        Debug.Log("Random number in list: " + r);

        currentPuzzle = puzzlePrefabs[r];
        Instantiate(currentPuzzle);
        currentPuzzle.SetActive(true);

        Debug.Log("Current puzzle: " + currentPuzzle);
    }



    void Start()
    {
        Puzzle.OnPuzzleComplete += CompletePuzzle;
    }

    private void Update()
    {

    }

    private void CompletePuzzle()
    {
        selectRandomPuzzle();
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete -= CompletePuzzle;
    }
}
