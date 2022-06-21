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
        if (Input.GetAxisRaw("Horizontal") != 0 || Input.GetButtonDown("Jump"))
        {
            player.SetState(new MoveState());
        }
    }

    public void OnExit()
    {

    }  
}
