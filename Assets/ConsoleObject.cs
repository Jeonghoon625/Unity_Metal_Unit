using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConsoleObject : MonoBehaviour
{
    public bool isPlayer = false;
    public GameObject panel;

    private void Awake()
    {
        panel.SetActive(false);
    }

    private void Update()
    {
        if(isPlayer)
        {
            panel.SetActive(true);
        }
        else
        {
            panel.SetActive(false);
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        isPlayer = collision.gameObject.CompareTag("Player");
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        isPlayer = false;
    }
}
