using UnityEngine.SceneManagement;

public class SceneLoader
{
    public static void LoadScene(string sceneName="")
    {
        if(sceneName == "")
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
        else
        {
            SceneManager.LoadScene(sceneName);
        }
    }
}
