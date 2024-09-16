using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenericScrewSlotsController : ScrewBox
{
    public void RemoveScrew(ScrewColorBox screwColorBox)
    {
        foreach (ScrewHole slot in ScrewHoles)
        {
            if(slot.Screw == null) continue;
            if(slot.Screw.ColorType == screwColorBox.ColorType)
            {
                if (!screwColorBox.CheckColorType(slot.Screw.ColorType)) continue;
                screwColorBox.AddScrew(slot.Screw);
                slot.RemoveScrew();
            }
        }
    }
}
