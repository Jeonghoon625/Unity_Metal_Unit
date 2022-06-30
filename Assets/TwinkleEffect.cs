using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TwinkleEffect : MonoBehaviour
{
    public float fadeTime;
    public TextMeshProUGUI textFade;

    private void Awake()
    {
        textFade = GetComponent<TextMeshProUGUI>();

        StartCoroutine(Twinkle());
    }

    private IEnumerator Twinkle()
    {
        while(true)
        {
            yield return StartCoroutine(Fade(1, 0));

            yield return StartCoroutine(Fade(0, 1));
        }
    }

    private IEnumerator Fade(float start, float end)
    {
        float current = 0;
        float percent = 0;

        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / fadeTime;

            Color color = textFade.color;
            color.a = Mathf.Lerp(start, end, percent);
            textFade.color = color;

            yield return null;
        }
    }
}
