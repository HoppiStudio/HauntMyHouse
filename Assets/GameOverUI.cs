using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] private GameTimer timer;
    [SerializeField] private GameObject gameOverContainer;
    [SerializeField] private TMP_Text scoreText;

    void Start()
    {
        timer.OnTimerComplete += GameOverCanvas;

        if (gameOverContainer.activeInHierarchy)
        {
            gameOverContainer.SetActive(false);
        }
    }

    void Update()
    {
        
    }

    private void GameOverCanvas()
    {
        gameOverContainer.SetActive(true);
        scoreText.text = $"SCORE: {ScoreManager.Score}";

    }

    private void OnDisable()
    {
        timer.OnTimerComplete -= GameOverCanvas;
    }
}
