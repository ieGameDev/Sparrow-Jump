using System.Collections;
using TMPro;
using UnityEngine;

public class BonusLevelText : MonoBehaviour
{
    [SerializeField] private float _blinkFrequency = 1.0f;
    [SerializeField] private float _fadeDuration = 0.5f;

    private TextMeshProUGUI _textMeshPro;
    private bool _isFading = false;

    private void Start()
    {
        _textMeshPro = GetComponent<TextMeshProUGUI>();
        InvokeRepeating("ToggleVisibility", 0f, 1f / _blinkFrequency);
    }

    private void ToggleVisibility()
    {
        if (!_isFading)
        {
            StartCoroutine(FadeText());
        }
    }

    private IEnumerator FadeText()
    {
        _isFading = true;
        float elapsedTime = 0f;
        Color startColor = _textMeshPro.color;
        Color targetColor = new Color(startColor.r, startColor.g, startColor.b, startColor.a == 1.0f ? 0.0f : 1.0f);

        while (elapsedTime < _fadeDuration)
        {
            elapsedTime += Time.deltaTime;
            _textMeshPro.color = Color.Lerp(startColor, targetColor, elapsedTime / _fadeDuration);
            yield return null;
        }

        _textMeshPro.color = targetColor;
        _isFading = false;
    }
}
