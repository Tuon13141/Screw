using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Screw : MonoBehaviour
{
    [SerializeField] ColorType colorType;
    public ColorType ColorType => colorType;

    [SerializeField] ScrewController controller;

    [SerializeField] Transform targetPoint;

    [SerializeField] float moveSpeed = 10f;

    SpriteRenderer spriteRenderer;

    public int PositionInPanelList { get; set; }

    Panel panel;
    public Panel Panel => panel;


    public void OnStart()
    {
        targetPoint = transform;
        spriteRenderer = GetComponent<SpriteRenderer>();

        switch (colorType)
        {
            case ColorType.Blue:
                spriteRenderer.color = Color.blue;
                break;
            case ColorType.Green:
                spriteRenderer.color = Color.green;
                break;
            case ColorType.Red:
                spriteRenderer.color = Color.red;
                break;
            case ColorType.Yellow:
                spriteRenderer.color = Color.yellow;
                break;
            case ColorType.LightBlue:
                Color lightBlue = new Color(173f / 255f, 216f / 255f, 230f / 255f, 1f);
                spriteRenderer.color = lightBlue;
                break;
            case ColorType.LightGreen:
                Color lightGreen = new Color(144f / 255f, 238f / 255f, 144f / 255f, 1f);
                spriteRenderer.color = lightGreen;
                break;
            case ColorType.LightRed:
                Color lightRed = new Color(255f / 255f, 182f / 255f, 193f / 255f, 1f);
                spriteRenderer.color = lightRed;
                break;
            case ColorType.LightYellow:
                Color lightYellow = new Color(255f / 255f, 255f / 255f, 224f / 255f, 1f);
                spriteRenderer.color = lightYellow;
                break;
            case ColorType.Pink:
                Color pinkColor = new Color(255f / 255f, 192f / 255f, 203f / 255f, 1f);
                spriteRenderer.color = pinkColor;
                break;
            case ColorType.Gray:
                spriteRenderer.color = Color.gray;
                break;
            case ColorType.Violet:
                Color violetColor = new Color(238f / 255f, 130f / 255f, 238f / 255f, 1f);
                spriteRenderer.color = violetColor;
                break;
            case ColorType.Orange:
                Color orangeColor = new Color(255f / 255f, 165f / 255f, 0f / 255f, 1f);
                spriteRenderer.color = orangeColor;
                break;
            case ColorType.Cyan:           
                spriteRenderer.color = Color.cyan;
                break;
        }

        spriteRenderer.sortingOrder = 10;

        HingeJoint2D hingeJoint2D = GetComponent<HingeJoint2D>();

        hingeJoint2D.connectedAnchor = Panel.transform.localPosition;
        hingeJoint2D.enableCollision = false;

        Rigidbody2D rigidbody2D = GetComponent<Rigidbody2D>();

        rigidbody2D.bodyType = RigidbodyType2D.Static;

        Collider2D collider2D = GetComponent<Collider2D>();
        collider2D.isTrigger = true;

        StartCoroutine(TurnOnCollision(hingeJoint2D));
        //foreach(Panel panel in beforePanels)
        //{
        //    panel.AddAfterScrew(this);
        //}
    }
    void Update()
    {
        if (transform.position != targetPoint.position)
        {
            transform.position = Vector3.Lerp(transform.position, targetPoint.position, moveSpeed * Time.deltaTime);
        }
    }

    public void SetScrewController(ScrewController screwController)
    {
        this.controller = screwController;
    }

    public void setTargetPoint(Transform targetPoint)
    {
        gameObject.transform.SetParent(targetPoint);
        this.targetPoint = targetPoint;
    }

    public void SetMoveSpeed(float moveSpeed)
    {
        this.moveSpeed = moveSpeed;
    }

    public void Clicked()
    {
        controller.ScrewClicked(this);
    }

    public void SetPanel(Panel panel)
    {
        this.panel = panel;
    }

    IEnumerator TurnOnCollision(HingeJoint2D hingeJoint2D)
    {
        yield return new WaitForEndOfFrame();

        hingeJoint2D.enableCollision = true;
    }
}

public enum ColorType
{
    Red, Green, Blue, Yellow, LightRed, LightGreen, LightBlue, LightYellow, Cyan, Pink, Gray, Violet, Orange
}
