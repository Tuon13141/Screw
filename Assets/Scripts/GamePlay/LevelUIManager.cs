using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelUIManager : MonoBehaviour
{
    [SerializeField] List<Text> levelTextList;

    [SerializeField] Text currentLevelText;

    [SerializeField] Image currentFill;


    private void Start()
    {
        SetUp();
    }

    public void SetUp()
    {
        int currentLevel = GameManager.Instance.userData.currentLevel + 1;
        int tempCurrentLevel = currentLevel - 1;

        currentLevelText.text = currentLevel.ToString();
        currentLevel++;

        bool nextLevel = true;
        foreach (var text in levelTextList)
        {
            if (nextLevel)
            {
                if (text == currentLevelText)
                {
                    nextLevel = false;
                    continue;
                }
                text.text = currentLevel.ToString();
                currentLevel++;

            }
            else
            {
                text.text = tempCurrentLevel.ToString();
                tempCurrentLevel--;
            }
        }
    }
}
