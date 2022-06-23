using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleState : IState
{
    private Player player;
    private Animator animator;

    public void OnEnter(Player player)
    {
        this.player = player;
        animator = player.gameObject.GetComponent<Animator>();
    }

    public void OnUpdate()
    {
        
        if (Input.GetAxisRaw("Horizontal") != 0 || Input.GetButtonDown("Jump") || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift))
        {
            player.SetState("MoveState");
            
        }

        /*
        if (Input.GetMouseButtonDown(0))
        {            
            player.SetState("AttackState");
        }
        */
    }

    public void OnExit()
    {
        player.prevState = "IdleState";
    }  
}
