using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelStageController : MonoBehaviour
{
    [SerializeField] LevelStage levelStage = LevelStage.Playing;

    public void ChangeStage(LevelStage stage)
    {
        ExitCurrentStage();
        
        this.levelStage = stage;

        EnterNewStage();
    }

    void ExitCurrentStage()
    {
        switch (levelStage)
        {
            case LevelStage.Playing:

                break;
            case LevelStage.Win:

                break;
            case LevelStage.Lose:

                break;
        }
    }

    void EnterNewStage()
    {
        switch (levelStage)
        {
            case LevelStage.Win:
                StartCoroutine(Win());
                break;
            case LevelStage.Lose:
                StartCoroutine(Lose());
                break;
        }
    }

    IEnumerator Win()
    {
        yield return new WaitForSeconds(1);

        GameManager.Instance.ChangeState(GameStates.Win);
    }

    IEnumerator Lose()
    {
        yield return new WaitForSeconds(1);

        GameManager.Instance.ChangeState(GameStates.Lose);
    }
}

public class DefaultSpeedSetting
{
    public static float ScrewBoxMoveSpeed = 5f;
    public static float ScrewMoveSpeed = 5f;
}

public enum LevelStage
{
    Playing, Win, Lose
}
