using UnityEngine;

public class PrefabsLoader : MonoBehaviour
{
    [SerializeField] private GameObject[] _prefabs;

    private void Start()
    {
        foreach (var prefab in _prefabs)
        {
            Instantiate(prefab, transform.position, Quaternion.identity);
        }
    }
}
