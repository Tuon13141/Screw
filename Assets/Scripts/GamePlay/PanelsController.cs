using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelsController : MonoBehaviour
{
    [SerializeField] List<Panel> panels;
    public List<Panel> Panels => panels;

    [SerializeField] ScrewController screwController;

    private void Start()
    {
        screwController = GetComponent<ScrewController>();  

        screwController.Screws.Clear();
        panels = new List<Panel>();

        panels.AddRange(GetComponentsInChildren<Panel>());

        foreach (Panel panel in panels)
        {    
            panel.OnStart();
            screwController.Screws.AddRange(panel.Screws);
        }

        screwController.OnStart();
    }
}
