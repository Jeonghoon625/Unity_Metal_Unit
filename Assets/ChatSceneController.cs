using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ChatSceneController : MonoBehaviour
{
    public SceneFade fade;
    public TextMeshProUGUI ChatText;
    public TextMeshProUGUI CharacterName;

    public GameObject leftPos;
    public GameObject rightPos;
    public GameObject centerPos;
    public GameObject Canverse;

    public string writerText = "";

    private bool isChat = false;

    private void Awake()
    {
        Application.runInBackground = true;
        //윈도우 포커스 X => 게임은 계속 실행.
        leftPos.SetActive(false);
        rightPos.SetActive(false);
        centerPos.SetActive(false);
    }

    private void Start()
    {
        StartCoroutine(ChatSystem());
    }

    IEnumerator ChatSystem()
    {
        yield return StartCoroutine(NormalChat("지휘관", "긴급상황 발생"));
        yield return StartCoroutine(NormalChat("지휘관", "비상 프로토콜 911"));
        yield return StartCoroutine(NormalChat("지휘관", "현재 연구소에서 대형 화재가 발생했다"));
        yield return StartCoroutine(NormalChat("지휘관", "전대원, 신속히 연구소로 이동, 화재를 진압하라"));
        yield return StartCoroutine(NormalChat("유나", "네, 알겠습니다. 지휘관님"));
        yield return StartCoroutine(NormalChat("유나", "화재의 추정원인은 무엇입니까?"));
        yield return StartCoroutine(NormalChat("지휘관", "그것은 아직까지 밝혀지지않았다."));
        yield return StartCoroutine(NormalChat("지휘관", "최초 신고자는 푸른빛의 섬광을 보았다곤하나..."));
        yield return StartCoroutine(NormalChat("지휘관", "우선 화재 진압을 최우선으로하도록"));
        yield return StartCoroutine(NormalChat("유나", "네, 알겠습니다."));
        yield return StartCoroutine(NormalChat("유나", ""));
        yield return StartCoroutine(NormalChat("지휘관", "..."));
        yield return StartCoroutine(NormalChat("", "이제부터 시작인가..."));
        isChat = true;
    }

    IEnumerator NormalChat(string narrator, string narration)
    {
        int a = 0;
        CharacterName.text = narrator;
        writerText = "";

        if(narrator == "유나")
        {
            leftPos.SetActive(true);
            rightPos.SetActive(false);
            centerPos.SetActive(false);
        }
        else if(narrator == "지휘관")
        {
            leftPos.SetActive(false);
            rightPos.SetActive(true);
            centerPos.SetActive(false);
        }
        else
        {
            leftPos.SetActive(false);
            rightPos.SetActive(false);
            centerPos.SetActive(true);
        }

        for (a = 0; a < narration.Length; a++)
        {
            writerText += narration[a];
            ChatText.text = writerText;
            yield return null;
        }

        while (true)
        {
            if(Input.GetKeyDown(KeyCode.Return) || Input.touchCount > 0)
            {
                break;
            }

            yield return null;
        }
    }

    private void Update()
    {
        if(isChat)
        {
            fade.isChanged = true;

            leftPos.SetActive(false);
            rightPos.SetActive(false);
            centerPos.SetActive(false);

            if (fade.isEnd)
            {
                SceneLoader.LoadScene("GameScene");
            }
        }
    }
}
