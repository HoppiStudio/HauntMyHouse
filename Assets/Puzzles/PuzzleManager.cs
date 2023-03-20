using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Puzzles
{
    public class PuzzleManager : MonoBehaviour
    {
        [SerializeField] private GameObject blockoutCanvas;
        [SerializeField] private GameObject gameOverCanvas;
        [SerializeField] private GameObject rayInteractor;
        [SerializeField] private List<GameObject> puzzlePrefabs;
        private GameTimer _gameTimer; // Temporary, timer should probably be accessed statically 
        private AudioSource _puzzleCompletedSound;

        private void Awake()
        {
            _gameTimer = FindObjectOfType<GameTimer>();
            _puzzleCompletedSound = GetComponent<AudioSource>();
        }

        private void OnDisable() => Puzzle.OnPuzzleComplete -= SpawnRandomPuzzle_OnPuzzleComplete;
        private void Start()
        {
            Puzzle.OnPuzzleComplete += SpawnRandomPuzzle_OnPuzzleComplete;
            _gameTimer.OnTimerComplete += DisplayGameOverUi_OnTimerComplete;
        }

        private void SpawnRandomPuzzle_OnPuzzleComplete()
        {
            Destroy(FindObjectOfType<Puzzle>().gameObject);
            Instantiate(puzzlePrefabs[Random.Range(0, puzzlePrefabs.Count)]);
            _puzzleCompletedSound.Play();
        }
        
        public void SpawnFirstPuzzle_OnContinuePressed() 
        {
            blockoutCanvas.SetActive(false);
            rayInteractor.SetActive(false);
            Instantiate(puzzlePrefabs[Random.Range(0, puzzlePrefabs.Count)]);
        }
        
        private void DisplayGameOverUi_OnTimerComplete()
        {
            gameOverCanvas.SetActive(true);
            rayInteractor.SetActive(true);
            Destroy(FindObjectOfType<Puzzle>().gameObject);
        }
    }
}
