using System;
using System.Collections;
using UnityEngine;

namespace CandlePuzzle
{
    public class PushableButton : MonoBehaviour
    {
        public event Action OnPushed;

        [SerializeField] private GameObject buttonModel;
        private const float MoveTime = 0.5f;
        private const float MoveDistance = 0.05f;
        private Vector3 _startingPosition;
        private bool _isPressed = false;

        private void Start() => _startingPosition = buttonModel.transform.position;

        /// <summary>
        /// Called by an XRSimpleInteractable event on the script attached to the RedButton/Button gameobject
        /// </summary>
        public void ButtonPressed()
        {
            if (!_isPressed)
            {
                StartCoroutine(PushButtonAnimation());
            }
        }

        IEnumerator PushButtonAnimation()
        {
            _isPressed = true;

            // Calculate the target position for the button to move down to
            Vector3 targetPosition = _startingPosition - new Vector3(0, MoveDistance, 0);

            // Smoothly move the button down to the target position over moveTime seconds
            float t = 0;
            while (t < MoveTime)
            {
                buttonModel.transform.position = Vector3.Lerp(_startingPosition, targetPosition, t / MoveTime);
                t += Time.deltaTime;
                yield return null;
            }
        
            OnPushed?.Invoke();

            // Smoothly move the button back up to its starting position over moveTime seconds
            t = 0;
            while (t < MoveTime)
            {
                buttonModel.transform.position = Vector3.Lerp(targetPosition, _startingPosition, t / MoveTime);
                t += Time.deltaTime;
                yield return null;
            }

            // Flag the button as no longer being pressed
            _isPressed = false;
        }

    }
}
