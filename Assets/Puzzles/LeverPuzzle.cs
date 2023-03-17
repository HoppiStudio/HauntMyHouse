/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("The correct solution for the levers")]
    private List<LeverState> solution = new List<LeverState>();

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }

    public void CheckPuzzleComplete()
    {
        int correctAnswers = 0;

        for (int i = 0; i < solution.Count; i++)
        {
            if (solution[i] == levers[i].state)
            {
                correctAnswers++;
            }
        }

        if (correctAnswers == solution.Count)
        {
            Complete();
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }
}*/
/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("The correct solution for the levers")]
    private List<LeverState> solution = new List<LeverState>() { LeverState.Up, LeverState.Down, LeverState.Middle, LeverState.Middle, LeverState.Down };

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }

        // Set initial state of each lever to be in the middle
        foreach (var lever in levers)
        {
            lever.SetState(LeverState.Middle);
        }

        // Set the state of each lever to the desired solution state
        levers[0].SetState(LeverState.Up);
        levers[1].SetState(LeverState.Down);
        levers[2].SetState(LeverState.Middle);
        levers[3].SetState(LeverState.Middle);
        levers[4].SetState(LeverState.Down);
    }

    public void CheckPuzzleComplete()
    {
        bool correctOrder = true;
        bool correctState = true;

        // Check if levers are in correct order and state
        for (int i = 0; i < solution.Count; i++)
        {
            if (levers[i].state != solution[i])
            {
                correctState = false;
            }

            if (i > 0 && solution[i] < solution[i - 1])
            {
                correctOrder = false;
            }
        }

        if (correctOrder && correctState)
        {
            Complete();
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged -= CheckPuzzleComplete;
        }
    }
}*/
/*public class TestScript: MonoBehaviour
{
    public List<LeverSolution> possibleSolutions = new List<LeverSolution>();
}
[System.Serializable]
public class LeverSolution
{
    public List<LeverState> leverStates;
}*/
/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("The correct solution for the levers")]
    private List<LeverState> solution = new List<LeverState>();

    [SerializeField, Header("Possible solutions for the levers")]
    private List<LeverSolution> possibleSolutions = new List<LeverSolution>();

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }

    public void CheckPuzzleComplete()
    {
        int correctAnswers = 0;

        for (int i = 0; i < solution.Count; i++)
        {
            if (solution[i] == levers[i].state)
            {
                correctAnswers++;
            }
        }

        if (correctAnswers == solution.Count)
        {
            Complete();
        }
    }

    public bool CheckSolution(LeverSolution solution)
    {
        bool isCorrect = true;

        for (int i = 0; i < levers.Count; i++)
        {
            if (levers[i].state != solution.leverStates[i])
            {
                isCorrect = false;
                break;
            }
        }

        return isCorrect;
    }

    public void RandomizeSolution()
    {
        if (possibleSolutions.Count > 0)
        {
            int index = Random.Range(0, possibleSolutions.Count);
            solution = possibleSolutions[index].leverStates;
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }
}

[System.Serializable]
public class LeverSolution
{
    public List<LeverState> leverStates;
}

public class TestScript : MonoBehaviour
{
    public List<LeverSolution> possibleSolutions = new List<LeverSolution>();
}*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class LeverPuzzle : Puzzle
{
    [SerializeField, Header("Lever object references")]
    private List<Lever> levers = new List<Lever>();

    [SerializeField, Header("Possible solutions for the levers")]
    private List<LeverSolution> possibleSolutions = new List<LeverSolution>();

    void Start()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }

    public void CheckPuzzleComplete()
    {
        int correctAnswers = 0;

        for (int i = 0; i < possibleSolutions[0].leverStates.Count; i++)
        {
            if (possibleSolutions[0].leverStates[i] == levers[i].state)
            {
                correctAnswers++;
            }
        }

        if (correctAnswers == possibleSolutions[0].leverStates.Count)
        {
            Complete();
        }
    }

    public bool CheckSolution(LeverSolution solution)
    {
        bool isCorrect = true;

        for (int i = 0; i < levers.Count; i++)
        {
            if (levers[i].state != solution.leverStates[i])
            {
                isCorrect = false;
                break;
            }
        }

        return isCorrect;
    }

    public void RandomizeSolution()
    {
        if (possibleSolutions.Count > 0)
        {
            int index = Random.Range(0, possibleSolutions.Count);
            possibleSolutions[0] = possibleSolutions[index];
        }
    }

    private void OnDisable()
    {
        foreach (var lever in levers)
        {
            lever.OnLeverStateChanged += CheckPuzzleComplete;
        }
    }
}

[System.Serializable]
public class LeverSolution
{
    public List<LeverState> leverStates;
}

public class TestScript : MonoBehaviour
{
    public List<LeverSolution> possibleSolutions = new List<LeverSolution>();
}
