using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Controllers
{
    public class SceneController : MonoBehaviour
    {
        [SerializeField] private GameObject transitionPanelGameObject;
        [SerializeField] private GameObject mainCameraGameObject;
        // [SerializeField] private GameObject horizon;

        private Animator transitionPanelAnimator;
        private Animator mainCameraAnimator;

        private void Start()
        {
            transitionPanelAnimator = transitionPanelGameObject.GetComponent<Animator>();
            mainCameraAnimator = mainCameraGameObject.GetComponent<Animator>();
        }

        public void SwitchScene(string sceneName)
        {
            ResetGameState();

            // if (SceneManager.GetActiveScene().name == "MainMenu")
            // {
            //     mainCameraAnimator.SetTrigger("CameraZoomIn");
            // }

            StartCoroutine(LoadScene(sceneName));
        }

        private IEnumerator LoadScene(string sceneName)
        {
            transitionPanelAnimator.Play("CircleWipeIn");
            AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName);
            asyncOperation.allowSceneActivation = false;
            // if (sceneName == "NeuroRacer" || sceneName == "MainMenu")
            // {
            //     horizon.SetActive(false);
            // }
            // else{
            //     horizon.SetActive(true);
            // }

            yield return new WaitForSeconds(0.8f);

            asyncOperation.allowSceneActivation = true;
        }

        private static void ResetGameState()
        {
            Time.timeScale = 1f;
            GameController.GamePaused = false;
            GameController.DoubleTempo = false;
        }
    }
}