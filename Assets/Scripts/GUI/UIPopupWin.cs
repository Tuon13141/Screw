using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPopupWin : UIElement
{
    public override bool ManualHide => true;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button claimButton;

    public void ClaimButton()
    {
        GameUI.Instance.Get<UIMain>().Show();
        
        Hide();
    }

    private void Start()
    {
        claimButton.onClick.AddListener(ClaimButton);
    }
}
