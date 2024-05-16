using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Loading : MonoBehaviour
{
    public Image ProgressBar;

    private void Start()
    {
        StartCoroutine(LoadLevelAsync());
    }

    IEnumerator LoadLevelAsync()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync("Main Menu");

        while (operation.isDone == false)
        {
            ProgressBar.fillAmount = operation.progress;
            yield return new WaitForEndOfFrame();
        }
    }
}
