using UnityEngine;
using UnityEngine.UI;

public class LevelObject : MonoBehaviour
{
    public Button LevelButton;
    public Image Ñherry; 
    [SerializeField] private Sprite _cherryActiveSprite;
    [SerializeField] private Sprite _cherryInactiveSprite;

    private bool _cherrySpriteSet;

    public void UpdateCherrySprite(bool allDiamondsCollected)
    {
        Ñherry.sprite = allDiamondsCollected ? _cherryActiveSprite : _cherryInactiveSprite;
    }
}
