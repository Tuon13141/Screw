using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrewBox : MonoBehaviour
{
    [SerializeField] List<ScrewHole> screwHoles;
    public List<ScrewHole> ScrewHoles => screwHoles;
    public void OnStart()
    {
        screwHoles = new List<ScrewHole>();
        screwHoles.AddRange(GetComponentsInChildren<ScrewHole>(true));
    }
    public bool IsFull()
    {
        bool isFull = true;
        foreach (ScrewHole slot in screwHoles)
        {
            if (!slot.Holding && slot.gameObject.activeInHierarchy)
            {
                isFull = false;
                break;
            }
        }
        return isFull;
    }

    public virtual void AddScrew(Screw screw)
    {
        if (IsFull()) return;

        foreach (ScrewHole slot in ScrewHoles)
        {
            if (!slot.Holding && slot.gameObject.activeInHierarchy)
            {

                screw.Panel.DisableAnchor(screw.PositionInPanelList);
             
                slot.SetScrew(screw);
                screw.setTargetPoint(slot.gameObject.transform);

           
                return;
            }
        }
    }

}
