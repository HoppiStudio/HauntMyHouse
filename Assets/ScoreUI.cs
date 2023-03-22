using UnityEngine;
using TMPro;
using Puzzles;

public class ScoreUI : MonoBehaviour
{
    [SerializeField] private TMP_Text scoreText;

    private void OnEnable()
    {
        ScoreManager.OnScoreIncrease += UpdateText;
    }

    private void Start()
    {
        UpdateText();
    }

    private void UpdateText()
    {
        scoreText.text = $"{ScoreManager.Score}";
    }

    private void OnDisable()
    {
        Puzzle.OnPuzzleComplete += UpdateText;
    }
}
