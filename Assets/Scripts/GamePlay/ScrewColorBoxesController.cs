using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
public class ScrewColorBoxesController : MonoBehaviour
{  
    [SerializeField] Transform startTransform;
    [SerializeField] Transform postTransform;
    [SerializeField] Transform currentTransform;
    [SerializeField] Transform endTransform;

    [SerializeField] List<ScrewColorBox> screwColorBoxes;
    [SerializeField] ScrewColorBox current;
    [SerializeField] ScrewColorBox postCurrent;
    int index = 0;

    float moveSpeed = DefaultSpeedSetting.ScrewBoxMoveSpeed;

    [SerializeField] GenericScrewSlotsController genericScrewSlotsController;
    [SerializeField] LevelStageController levelController;

    private void Start()
    {
        levelController = GetComponent<LevelStageController>();
        genericScrewSlotsController = GetComponent<GenericScrewSlotsController>();
        //genericScrewSlotsController.OnStart();

        screwColorBoxes = new List<ScrewColorBox>();
        screwColorBoxes.AddRange(GetComponentsInChildren<ScrewColorBox>());

        foreach (ScrewColorBox c in screwColorBoxes)
        {
            c.OnStart();
            c.SetMoveSpeed(moveSpeed);
            c.SetScrewColorBoxesController(this);
            c.SetTargetPoint(startTransform);
        }

        current = screwColorBoxes[index];
        current.SetTargetPoint(currentTransform);

        if (index + 1 < screwColorBoxes.Count)
        {
            postCurrent = screwColorBoxes[index + 1];
            postCurrent.SetTargetPoint(postTransform);
        }
    }

    public IEnumerator NextBox()
    {
        yield return new WaitForSeconds(1f);

        current.SetTargetPoint(endTransform);

        index++;
        if (index >= screwColorBoxes.Count)
        {
            levelController.ChangeStage(LevelStage.Win);
            yield break ;
        }
        current = screwColorBoxes[index];
        current.SetTargetPoint(currentTransform);

        genericScrewSlotsController.RemoveScrew(current);

        if(index + 1 < screwColorBoxes.Count)
        {
            postCurrent = screwColorBoxes[index + 1];
            postCurrent.SetTargetPoint(postTransform);
        }
    }

    public bool AddScrew(Screw screw)
    {
        if(!current.CheckColorType(screw.ColorType)) return false;
        current.AddScrew(screw);

        return true;
    }
}
