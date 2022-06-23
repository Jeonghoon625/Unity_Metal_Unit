using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
    public float currentTime;
    public float maxTime = 10;

    private void Start()
    {
        StartCoroutine(timer());
    }

    public IEnumerator timer()
    {
        currentTime = 0;

        while(currentTime > maxTime)
        {
            currentTime = currentTime + Time.deltaTime;
            yield return null;
        }
    }
}
