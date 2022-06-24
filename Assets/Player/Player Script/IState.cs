using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IState
{
    void OnEnter(Player player);
    void OnUpdate();

    void OnFixedUpdate();
    void OnExit();
}
