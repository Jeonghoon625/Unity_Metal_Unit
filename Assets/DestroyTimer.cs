using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyTimer : MonoBehaviour
{
    public float TimeLimit;

    private float timer = 0f;

    private void Update()
    {
        timer += Time.deltaTime;

        if(timer > TimeLimit)
        {
            Destroy(this.gameObject);
        }
    }
}
