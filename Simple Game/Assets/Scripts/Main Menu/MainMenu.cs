using UnityEngine;

public class MainMenu : MonoBehaviour
{
    [SerializeField] private GameObject _levelSelectMenu;         

    private void Start()
    {
        _levelSelectMenu.SetActive(false);
    }
    

    public void OnClickPlay()
    {
        _levelSelectMenu.SetActive(true);
    }
}
