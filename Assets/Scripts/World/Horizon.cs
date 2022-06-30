using UnityEngine;
using UnityEngine.UI;

namespace World
{
    public class Horizon : MonoBehaviour
    {
        [SerializeField] private GameObject sunGameObject;
        [SerializeField] private GameObject moonGameObject;
        [SerializeField] private GameObject background;
        [SerializeField] private ParticleSystem stars;

        private Animation sunAnimation;
        private Animation moonAnimation;
        private Animation dayCounterAnimation;
        private Animation backgroundAnimation;
        private Text dayCounterText;

        private bool isNight;
        private int dayCounter;

        private void Start()
        {
            StartHorizonCycle();
            sunAnimation = sunGameObject.GetComponent<Animation>();
            moonAnimation = moonGameObject.GetComponent<Animation>();
            dayCounterAnimation = GameObject.FindWithTag("DayCounter").GetComponent<Animation>();
            backgroundAnimation = background.GetComponent<Animation>();
            dayCounterText = GameObject.FindWithTag("DayCounter").GetComponent<Text>();
        }

        public bool IsNight()
        {
            return isNight;
        }

        public void StartHorizonCycle()
        {
            InvokeRepeating("SunCycle", 0f, 60f);
            InvokeRepeating("MoonCycle", 30f, 60f);
        }

        private void SunCycle()
        {
            ShowDayCounter();
            stars.Stop();
            sunAnimation.Play();
            isNight = false;
        }

        private void MoonCycle()
        {
            stars.Play();
            moonAnimation.Play();
            isNight = true;
        }

        private void ShowDayCounter()
        {
            backgroundAnimation.Play("BackgroundCycle");
            dayCounterText.text = "Day " + ++dayCounter;
            dayCounterAnimation.Play("ShowDayCounter");
        }

        public void RestartGame(){
            isNight = false;
            dayCounter = 0;
            StartHorizonCycle();
        }
    }
}