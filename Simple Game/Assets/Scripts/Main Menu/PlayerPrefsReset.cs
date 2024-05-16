using UnityEngine;

public class PlayerPrefsReset : MonoBehaviour
{
    private void Awake()
    {
        PlayerPrefs.DeleteAll();
    }
}
