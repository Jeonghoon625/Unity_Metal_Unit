using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneFade : MonoBehaviour
{
    public UnityEngine.UI.Image fade;
    float fades = 1.0f;
    float fadesTime = 0f;
    public bool isChanged = false;
    public bool isEnd = false;

    private void Awake()
    {
        isChanged = false;
        isEnd = false;
    }

    private void Update()
    {
        if(isChanged)
        {
            fadesTime += Time.deltaTime;

            if (fades > 0.0f && fadesTime >= 0.1f)
            {
                fades -= 0.1f;
                fade.color = new Color(255, 255, 255, fades);
                fadesTime = 0;
            }
            else if (fades <= 0.0f)
            {
                isEnd = true;
            }
        }
    }
}
