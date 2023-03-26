using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using Random = UnityEngine.Random;

namespace Puzzles
{
    public class PuzzleManager : MonoBehaviour
    {
        [SerializeField] private GameObject blockoutCanvas;
        [SerializeField] private GameObject gameOverCanvas;
        [SerializeField] private List<GameObject> rayInteractors;
        [SerializeField] private List<GameObject> puzzlePrefabs;
        [SerializeField] private AudioSource puzzleCompletedSound;
        private int _lastPuzzleIndex;

        private void OnDisable()
        {
            PauseManager.Instance.OnPauseStateToggled -= SetRayInteractorVisibility_OnPauseState;
            Puzzle.OnPuzzleComplete -= SpawnRandomPuzzle_OnPuzzleComplete;
            GameTimer.Instance.OnTimerComplete -= DisplayGameOverUi_OnTimerComplete;
        }

        private void Start()
        {
            PauseManager.Instance.OnPauseStateToggled += SetRayInteractorVisibility_OnPauseState;
            Puzzle.OnPuzzleComplete += SpawnRandomPuzzle_OnPuzzleComplete;
            GameTimer.Instance.OnTimerComplete += DisplayGameOverUi_OnTimerComplete;
        }

        private void SetRayInteractorVisibility_OnPauseState(bool visible)
        {
            if (GameManager.GameStarted)
            {
                foreach (var rayInteractor in rayInteractors)
                {
                    rayInteractor.SetActive(visible);
                }
            }
        }

        private void SpawnRandomPuzzle_OnPuzzleComplete()
        {
            /*XRDirectInteractor[] xrDirectInteractors = FindObjectsOfType<XRDirectInteractor>();
            foreach (XRDirectInteractor interactor in xrDirectInteractors)
            {
                if(interactor.attachTransform.GetChildCount() > 0)
                {
                    Destroy(interactor.attachTransform.GetChild(0).gameObject);
                }
            }*/

            foreach (var item in FindObjectsOfType<XRGrabInteractable>())
            {
                Destroy(item.gameObject);
            }
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
            Instantiate(puzzlePrefabs[Random.Range(0, puzzlePrefabs.Count)]);

            foreach (var rayInteractor in rayInteractors)
            {
                rayInteractor.SetActive(false);
            }
        }
        
        public void SpawnSymbolPuzzle_OnFail() 
        {
            blockoutCanvas.SetActive(false);
            Instantiate(puzzlePrefabs[2]);

            foreach (var rayInteractor in rayInteractors)
            {
                rayInteractor.SetActive(false);
            }
        }
        private void DisplayGameOverUi_OnTimerComplete()
        {
            gameOverCanvas.SetActive(true);
            Destroy(FindObjectOfType<Puzzle>().gameObject);

            foreach (var rayInteractor in rayInteractors)
            {
                rayInteractor.SetActive(true);
            }
        }
    }
}
