using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    string levelDictPath = "level";
    GameObject currentLevel;

    [SerializeField] int maxLevel = 4;
    public bool LoadLevel(int level)
    {
        if(level >= maxLevel)
        {
            Debug.Log("Reached max level !");
            return false;
        }
        string levelPath = levelDictPath + "/Level_" + (level+1).ToString();
        currentLevel = Instantiate(Resources.Load<GameObject>(levelPath), this.gameObject.transform);
        return true;
    }

    public bool LoadLevel()
    {
        return LoadLevel(GameManager.Instance.userData.currentLevel);
        //return LoadLevel(3);
    }

    public void DestroyCurrentLevelObject()
    {
        Destroy(currentLevel);
    }
}
