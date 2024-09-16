using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrewColorBox : ScrewBox
{
    [SerializeField] ColorType colorType;
    public ColorType ColorType => colorType;

    [SerializeField] Transform targetPoint;
    float moveSpeed;

    [SerializeField] ScrewColorBoxesController controller;

    private void Update()
    {
        transform.position = Vector3.Lerp(transform.position, targetPoint.position, moveSpeed * Time.deltaTime);
    }

    public override void AddScrew(Screw screw)
    {
        if(screw.ColorType != ColorType) return;
        base.AddScrew(screw);

        if (IsFull())
        {
            StartCoroutine(controller.NextBox());
        }
    }

    public bool CheckColorType(ColorType colorType)
    {
        if (colorType != ColorType) return false;
        return true;
    }

    public void SetMoveSpeed(float speed) {  moveSpeed = speed; }

    public void SetTargetPoint(Transform targetPoint) { this.targetPoint = targetPoint; }

    public void SetScrewColorBoxesController(ScrewColorBoxesController controller) { this.controller = controller; }
}
