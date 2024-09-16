using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPopupMasterOffer : UIElement
{
    public override bool ManualHide => true;
    public override bool DestroyOnHide => true;
    public override bool UseBehindPanel => true;

    [SerializeField] Button closeButton;

    public void CloseButton()
    {
        Hide();
    }
    private void Start()
    {
        closeButton.onClick.AddListener(CloseButton);
    }
}

