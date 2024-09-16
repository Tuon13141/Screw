using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrewHole : MonoBehaviour
{
    public bool Holding = false;
    public Screw Screw;

    public void SetScrew(Screw screw)
    {
        this.Screw = screw;
        Holding = true;
    }

    public void RemoveScrew()
    {
        this.Screw = null;
        Holding = false;
    }
}
