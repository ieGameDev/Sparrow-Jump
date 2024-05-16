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
                Debug.Log("������ " + prefab.name + " ������� �������� �� ����� Resources.");
            }
            else
            {
                Debug.LogError("������ �������� ������� " + prefab.name + " �� ����� Resources.");
            }
        }
    }
}
