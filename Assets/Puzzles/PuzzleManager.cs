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
        [SerializeField] private AudioSource puzzleCompletedSound;
        private GameTimer _gameTimer; // Temporary, timer should probably be accessed statically 
        private int _lastPuzzleIndex;

        private void Awake() => _gameTimer = FindObjectOfType<GameTimer>();

        private void OnDisable()
        {
            PauseManager.Instance.OnPauseStateToggled -= SetRayInteractorVisibility_OnPauseState;
            Puzzle.OnPuzzleComplete -= SpawnRandomPuzzle_OnPuzzleComplete;
            _gameTimer.OnTimerComplete -= DisplayGameOverUi_OnTimerComplete;
        }

        private void Start()
        {
            PauseManager.Instance.OnPauseStateToggled += SetRayInteractorVisibility_OnPauseState;
            Puzzle.OnPuzzleComplete += SpawnRandomPuzzle_OnPuzzleComplete;
            _gameTimer.OnTimerComplete += DisplayGameOverUi_OnTimerComplete;
        }

        private void SetRayInteractorVisibility_OnPauseState(bool visible)
        {
            if (GameManager.GameStarted)
            {
                rayInteractor.SetActive(visible);
            }
        }

        private void SpawnRandomPuzzle_OnPuzzleComplete()
        {
            Destroy(FindObjectOfType<Puzzle>().gameObject);

            // Ensure the same puzzle isn't selected again
            var selectedPuzzleIndex = Random.Range(0, puzzlePrefabs.Count);
            while (selectedPuzzleIndex == _lastPuzzleIndex)
            {
                selectedPuzzleIndex = Random.Range(0, puzzlePrefabs.Count);
            }
            _lastPuzzleIndex = selectedPuzzleIndex;
            Instantiate(puzzlePrefabs[selectedPuzzleIndex]);
            puzzleCompletedSound.Play();
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
