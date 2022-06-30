using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleSceneController : MonoBehaviour
{
    public SceneFade fade;

    private void Awake()
    {
        Application.runInBackground = true;
        //������ ��Ŀ�� X => ������ ��� ����.
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
