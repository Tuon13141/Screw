using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlassController : MonoBehaviour
{
    public GameObject mainObject; // Tấm kính
    public List<HingeJoint2D> anchors; // Các đinh neo ở các góc

    private Rigidbody2D rbMain;

    void Start()
    {
        rbMain = mainObject.GetComponent<Rigidbody2D>();
    }

    // Hàm bật một neo (đinh)
    public void EnableAnchor(int index)
    {
        if (index >= 0 && index < anchors.Count)
        {
            anchors[index].enabled = true; // Bật đinh
        }
    }

    // Hàm tắt một neo (gỡ đinh)
    public void DisableAnchor(int index)
    {
        if (index >= 0 && index < anchors.Count)
        {
            anchors[index].enabled = false; // Gỡ đinh
        }
    }

    // Tính lại trọng lực khi một hoặc nhiều đinh bị gỡ
    public void RecalculatePhysics()
    {
        rbMain.velocity = Vector2.zero; // Xóa vận tốc
        rbMain.angularVelocity = 0f; // Xóa vận tốc quay
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            DisableAnchor(0); // Gỡ đinh ở góc 1
            RecalculatePhysics();
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            DisableAnchor(1); // Gỡ đinh ở góc 2
            RecalculatePhysics();
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            DisableAnchor(2); // Gỡ đinh ở góc 3
            RecalculatePhysics();
        }
    }
}
