using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameOverUI : MonoBehaviour
{
    [SerializeField] private GameObject gameOverContainer;
    [SerializeField] private TMP_Text scoreText;

    void Start()
    {
        GameManager.Instance.OnGameOver += GameOverCanvas;

        if (gameOverContainer.activeInHierarchy)
        {
            gameOverContainer.SetActive(false);
        }
    }

    private void GameOverCanvas()
    {
        gameOverContainer.SetActive(true);
        scoreText.text = $"{ScoreManager.Score}";

    }

    private void OnDisable()
    {
        GameManager.Instance.OnGameOver -= GameOverCanvas;
    }
}
