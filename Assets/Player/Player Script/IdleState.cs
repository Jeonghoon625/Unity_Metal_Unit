using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleState : IState
{
    private Player player;
    private Animator animator;
    private Rigidbody2D rb;

    public void OnEnter(Player player)
    {
        this.player = player;

        animator = player.gameObject.GetComponent<Animator>();
        rb = player.GetComponent<Rigidbody2D>();
        Debug.Log("Idle");
    }

    public void OnUpdate()
    {
        if (Input.GetAxisRaw("Horizontal") != 0 || Input.GetButtonDown("Jump") 
            || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift) 
            || rb.velocity.y < 0 || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
        {
            player.SetState("MoveState");
        }
        
        if (Input.GetMouseButtonDown(1))
        {
           player.SetState("AttackState");
        }
    }

    public void OnExit()
    {
        player.prevState = "IdleState";
    }

    public void OnFixedUpdate()
    {

    }
}
