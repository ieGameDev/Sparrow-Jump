using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSettings : MonoBehaviour
{
    [SerializeField] private GameObject _pausePanel;
    [SerializeField] private GameObject _controllerCanvas;

    public void PauseButtonPressed()
    {
        _pausePanel.SetActive(true);
        _controllerCanvas.SetActive(false);
        Time.timeScale = 0f;
    }

    public void ContinueButtonPressed()
    {
        _pausePanel.SetActive(false);
        _controllerCanvas.SetActive(true);
        Time.timeScale = 1f;
    }

    public void RestartButtonPressed()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        Time.timeScale = 1f;
    }

    public void MenuButtonPressed()
    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1f;
    }
}
