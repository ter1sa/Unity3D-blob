using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Controllers
{
    public class SceneController : MonoBehaviour
    {
        [SerializeField] private GameObject mainCameraGameObject;

        private Animator transitionPanelAnimator;
        private Animator mainCameraAnimator;
        static public bool _mainMenu;
        // GameObject Stats;

        private void Start()
        {
            // Stats = GameObject.Find("Stats");
            // if (SceneManager.GetActiveScene().name == "MainMenu")
            // {
            //     Stats.SetActive(false);
            // }
            _mainMenu = false;
            transitionPanelAnimator = GameObject.Find("TransitionPanel2").GetComponent<Animator>();
            mainCameraAnimator = mainCameraGameObject.GetComponent<Animator>();
        }

        public void SwitchScene(string sceneName)
        {
            ResetGameState();

            if (SceneManager.GetActiveScene().name == "MainMenu")
            {
                _mainMenu = true;
            }
            else{
                _mainMenu = false;
            }
            
            StartCoroutine(LoadScene(sceneName));
        }

        private IEnumerator LoadScene(string sceneName)
        {
            // Stats.SetActive(true);
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

        public bool mainMenu {
		    get { return _mainMenu; }
	    }
    }
}