using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static SpeechRecognizerPlugin;

public class SpeechRecognizer : MonoBehaviour, ISpeechRecognizerPlugin
{
    [SerializeField] private TextMeshProUGUI resultsTxt = null;
    [SerializeField] private TextMeshProUGUI errorsTxt = null;

    public AudioSource audioSource;
    public AudioClip Cry1 , Cry2;
    float volume = 1f;

    private SpeechRecognizerPlugin plugin = null;

    private MovementFox fox;
    [SerializeField]
    private ARCursorRenderer ar;

    private void Start()
    {
        plugin = SpeechRecognizerPlugin.GetPlatformPluginVersion(this.gameObject.name);
        plugin.SetMaxResultsForNextRecognition(1);
        fox = GetComponent<MovementFox>();
    }

    public void StartListening()
    {
        plugin.StartListening();
    }

    public void StopListening()
    {
        plugin.StopListening();
    }

    private void SetContinuousListening(bool isContinuous)
    {
        plugin.SetContinuousListening(isContinuous);
    }
    
    private void SetMaxResults(string inputValue)
    {
        if (string.IsNullOrEmpty(inputValue))
            return;

        int maxResults = int.Parse(inputValue);
        plugin.SetMaxResultsForNextRecognition(maxResults);
    }

    public void OnResult(string recognizedResult)
    {
        char[] delimiterChars = { '~' };
        string[] result = recognizedResult.Split(delimiterChars);

        // resultsTxt.text = "";
        // for (int i = 0; i < result.Length; i++)
        // {
        //     resultsTxt.text += result[i] + '\n';
        // }
        if(result[0] == "good" || result[0] == "jump")
        {
            fox.Jump();
        }
        if(result[0] == "hello" || result[0] == "attack")
        {
            fox.Attack();
             audioSource.PlayOneShot(Cry1, volume);
        }
        if(result[0] == "follow" || result[0] == "go")
        {
            fox.Follow();
            fox.SetDestination();
             audioSource.PlayOneShot(Cry1, volume);
        }
         if(result[0] == "play" || result[0] == "run")
        {
            fox.Run();
        }
         if(result[0] == "stop" || result[0] == "sit")
        {
            fox.Idle();
             audioSource.PlayOneShot(Cry2, volume);
        }
        if(result[0] == "roll" || result[0] == "spin")
        {
            fox.Roll();
             audioSource.PlayOneShot(Cry1, volume);
        }
    }

    public void OnError(string recognizedError)
    {
        ERROR error = (ERROR)int.Parse(recognizedError);
        switch (error)
        {
            case ERROR.UNKNOWN:
                Debug.Log("<b>ERROR: </b> Unknown");
                errorsTxt.text += "Unknown";
                break;
            case ERROR.INVALID_LANGUAGE_FORMAT:
                Debug.Log("<b>ERROR: </b> Language format is not valid");
                errorsTxt.text += "Language format is not valid";
                break;
            default:
                break;
        }
    }
}