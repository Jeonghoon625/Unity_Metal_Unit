using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveState : IState
{
    private Player player;
    private GameObject playerGO;
    private Animator animator;
    private SpriteRenderer spriteRenderer;

    private bool isGround = false;
    Rigidbody2D rigid;
    int jumpCount = 0;
    
    public void OnEnter(Player player)
    {
        this.player = player;
        playerGO = player.gameObject;
        animator = playerGO.GetComponent<Animator>();
        spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
    }

    public void OnUpdate()
    {
        if(!Walk())
        {
            player.SetState(new IdleState());
        }
    }

    public void OnExit()
    {

    }

    private bool Walk()
    {
        float flipMove = 0f;

        if (Input.GetAxisRaw("Horizontal") != 0)
        {
            
            animator.SetBool("isWalk", true);

            if (Input.GetAxisRaw("Horizontal") < 0)
            { 
                flipMove = -1;
                playerGO.transform.localScale = new Vector3(-1f, 1f, 1f);
            }
            else
            {
                flipMove = 1;
                playerGO.transform.localScale = new Vector3(1f, 1f, 1f);
            }

            playerGO.transform.Translate(flipMove * player.WalkSpeed * Time.deltaTime, 0f, 0f);

            return true;
        }

        animator.SetBool("isWalk", false);
        return false;
    }

    /*
    void OnCollisonEnter2D(Collision2D col)
    {
        if (col.gameObject.tag == "Platform")
        {
            rigid.AddForce(Vector2.up * jumpPower, ForceMode2D.Impulse);
        }
    }
    */
}
