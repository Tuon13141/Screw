using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPopupLose : UIElement
{
    public override bool ManualHide => true;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button backButton;

    public void BackButton()
    {
        GameUI.Instance.Get<UIMain>().Show();

        Hide();
    }

    private void Start()
    {
        backButton.onClick.AddListener(BackButton);
    }
}