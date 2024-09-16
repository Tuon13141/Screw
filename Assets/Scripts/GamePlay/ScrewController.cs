using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrewController : MonoBehaviour
{
    [SerializeField] List<Screw> screws;
    public List<Screw> Screws => screws;

    [SerializeField] ScrewColorBoxesController screwColorBoxesController;
    public ScrewColorBoxesController ColorBoxesController => screwColorBoxesController;

    [SerializeField] GenericScrewSlotsController genericScrewSlotsController;

    public GenericScrewSlotsController GenericScrewSlotsController => genericScrewSlotsController;

    [SerializeField] LevelStageController levelController;
    public LevelStageController LevelController => levelController; 
    
    [SerializeField] PanelsController panelsController; 
    
    float screwMoveSpeed = DefaultSpeedSetting.ScrewMoveSpeed;

    public void OnStart()
    {
        screwColorBoxesController = GetComponent<ScrewColorBoxesController>();
        levelController = GetComponent<LevelStageController>();
        panelsController = GetComponent<PanelsController>();
        genericScrewSlotsController = GetComponent<GenericScrewSlotsController>();

        foreach (Screw screw in screws)
        {
            screw.SetScrewController(this);
            screw.SetMoveSpeed(screwMoveSpeed);
        }
    }

    public void ScrewClicked(Screw screw)
    {
        bool check = screwColorBoxesController.AddScrew(screw);
        if (!check)
        {
            if (genericScrewSlotsController.IsFull())
            {
                levelController.ChangeStage(LevelStage.Lose);
                return;
            }
            genericScrewSlotsController.AddScrew(screw);
        }

    }
}

