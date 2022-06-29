using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    bool isPlayer;
    PlatformEffector2D platFormGO;

    void Start()
    {
        isPlayer = false;
        platFormGO = GetComponent<PlatformEffector2D>();
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.S) && Input.GetKeyDown(KeyCode.DownArrow) && isPlayer)
        {
            platFormGO.rotationalOffset = 180f;
        }
        else if (Input.GetKeyDown(KeyCode.S) && Input.GetKey(KeyCode.DownArrow) && isPlayer)
        {
            platFormGO.rotationalOffset = 180f;
        }

        if (Input.GetKeyDown(KeyCode.Space))
        {
            platFormGO.rotationalOffset = 0f;
        }
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        isPlayer = collision.gameObject.CompareTag("Player");
        
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        isPlayer = false;
    }
}