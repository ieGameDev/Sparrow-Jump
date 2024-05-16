using System.Collections;
using UnityEngine;

public class LoadResourses : MonoBehaviour
{
    [SerializeField] private GameObject[] _prefabsToLoad;

    private IEnumerator Start()
    {
        foreach (GameObject prefab in _prefabsToLoad)
        {
            string path = "Prefabs/" + prefab.name;

            ResourceRequest request = Resources.LoadAsync<GameObject>(path);

            yield return request;

            GameObject loadedPrefab = request.asset as GameObject;

            if (loadedPrefab != null)
            {
                Debug.Log("Префаб " + prefab.name + " успешно загружен из папки Resources.");
            }
            else
            {
                Debug.LogError("Ошибка загрузки префаба " + prefab.name + " из папки Resources.");
            }
        }
    }
}
