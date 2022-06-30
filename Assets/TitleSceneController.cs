using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleSceneController : MonoBehaviour
{
    public SceneFade fade;

    private void Awake()
    {
        Application.runInBackground = true;
        //윈도우 포커스 X => 게임은 계속 실행.
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            fade.isChanged = true;
        }

        if (fade.isEnd)
        {
            SceneLoader.LoadScene("ChatScene");
        }
    }
}
