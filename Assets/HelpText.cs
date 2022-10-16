using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HelpText : MonoBehaviour
{
    string[] s = new string[6];
    private int i = -1;
    private TextMeshProUGUI text;
    
    void Start()
    {
        s[0] = "Say 'Jump' or 'Hello'";
        s[1] = "Say 'Roll' or 'Spin'";
        s[2] = "Say 'Hello' or 'Attack'";
        s[3] = "Say 'Run' or 'Play'";
        s[4] = "Say 'Follow' or 'Go'";
        s[5] = "Say 'Stop'' or 'Idle'";
        text = GetComponentInChildren<TextMeshProUGUI>();
        Press();
    }

    public void Press()
    {
        i++;
        if(i==6)
            i = 0;
        text.text = s[i];
    }
}
