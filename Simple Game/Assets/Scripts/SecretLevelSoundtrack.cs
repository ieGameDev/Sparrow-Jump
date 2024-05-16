using UnityEngine;
using UnityEngine.SceneManagement;

public class SecretLevelSoundtrack : MonoBehaviour
{
    private static SecretLevelSoundtrack instance;
    private AudioSource _audioSource;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            _audioSource = GetComponent<AudioSource>();
            _audioSource.Play();
            DontDestroyOnLoad(gameObject);

            SceneManager.sceneLoaded += OnSceneLoaded;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void OnDestroy()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex != 24)
        {
            _audioSource.Stop();
        }
    }
}
