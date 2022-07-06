using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleState : IState
{
    private Player player;
    private Animator animator;
    private Rigidbody2D rb;
    private SpriteRenderer spriteRenderer;
    private bool isDown;

    public void OnEnter(Player player)
    {
        this.player = player;

        animator = player.gameObject.GetComponent<Animator>();
        spriteRenderer = player.gameObject.GetComponent<SpriteRenderer>();
        rb = player.GetComponent<Rigidbody2D>();
    }

    public void OnUpdate()
    {
        if (!isDown && (Input.GetAxisRaw("Horizontal") != 0 || Input.GetButtonDown("Jump")
            || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift) 
            || rb.velocity.y < 0 || Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift) || player.joystick.GetAxisRaw("Horizontal") != 0) || player.jumpButton.isJumpButtonDown)
        {
            player.SetState("MoveState");
        }
        
        if (Input.GetMouseButtonDown(1))
        {
           player.SetState("AttackState");
        }

        if(Input.GetKey(KeyCode.DownArrow))
        {
            animator.SetBool("isDown", true);
            isDown = true;

            if(Input.GetAxisRaw("Horizontal") == -1 || player.joystick.GetAxisRaw("Horizontal") == -1)
            {
                spriteRenderer.flipX = true;
            }
            else if (Input.GetAxisRaw("Horizontal") == 1 || player.joystick.GetAxisRaw("Horizontal") == 1)
            {
                spriteRenderer.flipX = false;
            }
        }
        else
        {
            animator.SetBool("isDown", false);
            isDown = false;
        }
        
        if(Input.GetKeyUp(KeyCode.DownArrow) || rb.velocity.y < 0)
        {
            animator.SetBool("isDown", false);
            isDown = false;
        }
    }

    public void OnExit()
    {
        animator.SetBool("isDown", false);
        isDown = false;
        player.prevState = "IdleState";
    }

    public void OnFixedUpdate()
    {

    }
}
