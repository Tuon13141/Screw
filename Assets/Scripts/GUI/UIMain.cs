using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMain : UIElement
{
    public override bool ManualHide => true;
    public override bool DestroyOnHide => false;
    public override bool UseBehindPanel => false;

    [SerializeField] Button playButton;
    [SerializeField] Button settingButton;
    [SerializeField] Button dailySignInButton;
    [SerializeField] Button luckySpinButton;
    [SerializeField] Button removeAdsButton;
    [SerializeField] Button packButton;
    [SerializeField] Button passButton;
    [SerializeField] Button winStreakButton;
    [SerializeField] Button treasureButton;

    [SerializeField] int currentLevel;

    [SerializeField] LevelUIManager levelUIManager;
    public void PlayButton()
    {
        bool isSuccessed = GameManager.Instance.LevelManager.LoadLevel();
        if (!isSuccessed)
        {
            return;
        }
        Hide();
        GameUI.Instance.Get<UIBG>().Hide();
        GameUI.Instance.Get<UIInGameButton>().Show();
        GameUI.Instance.Get<UIInGamePowerUpButtons>().Show();
        GameUI.Instance.Get<UIInGameTop>().Show();
    }
    private void Start()
    {
        playButton.onClick.AddListener(PlayButton);
        GameUI.Instance.Get<UIPopupMasterOffer>().Show();
    }

    public override void Show()
    {
        levelUIManager.SetUp();
        GameManager.Instance.ChangeState(GameStates.Home);
        base.Show();
    }
}
