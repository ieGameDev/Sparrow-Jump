using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelectionMenuManager : MonoBehaviour
{
    public LevelObject[] LevelObjects;
    public static int UnlockedLevels;

    private void Start()
    {
        UnlockedLevels = PlayerPrefs.GetInt("UnlockedLevels", 1);
        UpdateUnlockedLevels();
        UpdateCherrySprites();
    }

    private void UpdateUnlockedLevels()
    {
        for (int i = 0; i < LevelObjects.Length; i++)
        {
            LevelObjects[i].LevelButton.interactable = (i < UnlockedLevels);
        }
    }

    private void UpdateCherrySprites()
    {
        for (int i = 0; i < LevelObjects.Length; i++)
        {
            bool allDiamondsCollected = PlayerPrefs.GetInt($"DiamondsCollected{i + 1}", 0) == 1;
            LevelObjects[i].UpdateCherrySprite(allDiamondsCollected);
        }
    }

    public void OnClickLevel(int levelNumber)
    {
        if (levelNumber < SceneManager.sceneCountInBuildSettings)
        {
            SceneManager.LoadScene(levelNumber);
        }
        else
        {
            Debug.Log($"Scene with build index: {levelNumber} doesn't exist in build settings.") ;
        }
    }

    public void OnClickLastUnlockedLevel()
    {
        int lastUnlockedLevel = UnlockedLevels;

        if (lastUnlockedLevel < SceneManager.sceneCountInBuildSettings)
        {
            SceneManager.LoadScene(lastUnlockedLevel);
        }
        else
        {
            SceneManager.LoadScene(1);
        }
    }

    public void OnClickBack()
    {
        gameObject.SetActive(false);
    }
}
