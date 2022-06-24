using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public Dictionary<string, IState> stateMap;

    public IState currentState;
    public string prevState;
    
    [SerializeField]
    [Range(0f, 10f)]
    float walkSpeed = 0.5f;

    [SerializeField]
    [Range(1f, 10f)]
    float jumpPower = 3f;

    public float WalkSpeed
    {
        get
        {
            return walkSpeed;
        }
    }

    public float JumpPower
    {
        get
        {
            return jumpPower;
        }
    }

    private void Awake()
    {
        stateMap = new Dictionary<string, IState>();

        string stateName;

        stateName = "IdleState";
        stateMap.Add(stateName, new IdleState());

        stateName = "MoveState";
        stateMap.Add(stateName, new MoveState());

        stateName = "AttackState";
        stateMap.Add(stateName, new AttackState());

        SetState("IdleState");
    }
    private void Update()
    {
        currentState.OnUpdate();
    }

    private void FixedUpdate()
    {
        currentState.OnFixedUpdate();
    }

    


    public void SetState(string stateName)
    {
        if (currentState != null)
        {
            currentState.OnExit();
        }

        IState nextState = stateMap[stateName];
        currentState = nextState;
        currentState.OnEnter(this);
        currentState.OnUpdate();
    }
}