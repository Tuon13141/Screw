using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalConfig : MonoBehaviour
{
    public static GlobalConfig instance;

    public bool isTurnOnSound;
    public bool isCacheIrcConsent;

    private void Awake()
    {
        instance = this;
#if UNITY_EDITOR
        PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
#endif
    }



}