using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackState : IState
{
    private Player player;
    private GameObject playerGO;
    private Animator animator;
    private SpriteRenderer spriteRenderer;

    int atkNum = 0;

    private float curTime = 0f;
    public float coolTime = 0.5f;

    bool ableCombo = false;

    public void OnEnter(Player player)
    {
        curTime = 0f;
        this.player = player;
        playerGO = player.gameObject;
        animator = playerGO.GetComponent<Animator>();
        spriteRenderer = playerGO.GetComponent<SpriteRenderer>();
        animator.SetBool("isAttack", true);
        player.Gun.SetActive(true);
        player.Gun.SendMessage("Fire");
    }

    public void OnUpdate()
    {
        if (curTime < coolTime)
        {
            curTime += Time.deltaTime;
        }
        
        else
        {
            animator.SetBool("isAttack", false);
            player.Gun.SetActive(false);
            player.SetState(player.prevState);  
        }
    }

    public void OnExit()
    {
        animator.SetBool("isAttack", false);
        player.prevState = "AttackState";
    }

    public void OnFixedUpdate()
    {
        
    }
}