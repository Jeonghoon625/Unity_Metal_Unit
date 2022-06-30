using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : MonoBehaviour
{
    private Animator animator;
    public float walkSpeed;
    public Player player;
    public FalconNPC falconNPC;

    private void Awake()
    {
        player.gameObject.GetComponent<SpriteRenderer>().enabled = false;
        falconNPC.gameObject.GetComponent<SpriteRenderer>().enabled = false;
        animator = this.GetComponent<Animator>();
    }

    public void Appear()
    {
        player.gameObject.GetComponent<SpriteRenderer>().enabled = true;
        falconNPC.gameObject.GetComponent<SpriteRenderer>().enabled = true;
        Destroy(gameObject, 0);
    }
}
