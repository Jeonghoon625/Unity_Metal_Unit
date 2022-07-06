using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Platform : MonoBehaviour
{
    PlatformEffector2D platFormGO;
    public VirtualButton virtualButton;
    public GameObject downButton;
    public Player player;

    void Start()
    {
        platFormGO = this.gameObject.GetComponent<PlatformEffector2D>();
    }

    void Update()
    {
        downButton.SetActive(player.inDownBlock);

        if (player.inDownBlock)
        {
            if (Input.GetKey(KeyCode.S) && Input.GetKeyDown(KeyCode.DownArrow))
            {
                platFormGO.rotationalOffset = 180f;
            }
            else if (Input.GetKeyDown(KeyCode.S) && Input.GetKey(KeyCode.DownArrow))
            {
                platFormGO.rotationalOffset = 180f;
            }
            else if (virtualButton.isDownButtonDown)
            {
                virtualButton.isDownButtonDown = false;
                platFormGO.rotationalOffset = 180f;
            }
            else
            {
                platFormGO.rotationalOffset = 0f;
            }
        }
    }
}