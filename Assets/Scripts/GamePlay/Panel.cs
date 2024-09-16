using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Panel : MonoBehaviour
{
    HingeJoint2D hingeJoint2D;
    public HingeJoint2D HingeJoint2D => hingeJoint2D;

    [SerializeField] List<Screw> screws;
    public List<Screw> Screws => screws;

    List<Screw> afterScrews = new();

    List<HingeJoint2D> anchors = new(); 

    private Rigidbody2D rbMain;

    public void OnStart()
    {
        screws = new List<Screw>();
        screws.AddRange(GetComponentsInChildren<Screw>().ToList());
        for(int i = 0; i < screws.Count; i++)
        {
            screws[i].PositionInPanelList = i;
            screws[i].SetPanel(this);
            screws[i].OnStart();
  
            try
            {
                anchors.Add(screws[i].gameObject.GetComponent<HingeJoint2D>());
            }
            catch
            {
                Debug.Log("Screw " +  i + " doesnt have HingeJoint2D !!");
            }
        }
        hingeJoint2D = GetComponent<HingeJoint2D>();

        Vector2 localPosition = hingeJoint2D.transform.InverseTransformPoint(screws[0].transform.position);

        hingeJoint2D.anchor = localPosition;

        rbMain = GetComponent<Rigidbody2D>();
        rbMain.bodyType = RigidbodyType2D.Dynamic;
        rbMain.mass = 7;
        rbMain.gravityScale = 5;
        rbMain.drag = 2;
        rbMain.angularDrag = 2; 

        
    }

    public void EnableAnchor(int index)
    {
        if (index >= 0 && index < anchors.Count)
        {
            anchors[index].enabled = true; 
        }
    }

    // Hàm tắt một neo (gỡ đinh)
    public void DisableAnchor(int index)
    {
        if (index >= 0 && index < anchors.Count)
        {
            anchors[index].enabled = false;
            screws[index].gameObject.GetComponent<Collider2D>().enabled = false;
        }
    }

    public void RecalculatePhysics()
    {
        rbMain.velocity = Vector2.zero; 
        rbMain.angularVelocity = 0f; 
    }


    public void AddAfterScrew(Screw screw)
    {
        afterScrews.Add(screw);
    }
}
