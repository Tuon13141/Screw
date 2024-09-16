using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    public float maxDistance = 100f;

    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            Vector3 mouseScreenPosition = Input.mousePosition;
            mouseScreenPosition.z = Mathf.Abs(Camera.main.transform.position.z);

            Vector3 mouseWorldPosition = Camera.main.ScreenToWorldPoint(mouseScreenPosition);
            mouseWorldPosition.z = 0;

            Ray ray = Camera.main.ScreenPointToRay(mouseScreenPosition);
            RaycastHit2D[] hits = Physics2D.RaycastAll(mouseWorldPosition, Vector2.zero, maxDistance);

            List<Panel> panelList = new List<Panel>();
            List<Screw> screwList = new List<Screw>();

            foreach (RaycastHit2D hit in hits)
            {
                //Debug.Log("Hit : " + hit.transform.name);
                Debug.Log(hit.collider.gameObject.name);

                Panel panel = hit.collider.gameObject.GetComponent<Panel>();
                if (panel != null)
                {
                    panelList.Add(panel);
                }

                Screw screw = hit.transform.GetComponent<Screw>();
                if (screw != null)
                {
                    //if (panelList.Count > 1) break;
                    //else if (panelList.Count == 1)
                    //{
                    //    if (screw.Panel != panelList[0]) break;
                    //}
                    //screw.Clicked();
                    //break;
                    screwList.Add(screw);
                }
            }

            if(screwList.Count > 0)
            {
                Screw mainScrew = GetObjectWithHighestLayer(screwList);
                if (CheckLayer(panelList, mainScrew))
                {
                    mainScrew.Clicked();
                }
            }
            
        }

        else if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Ray ray = Camera.main.ScreenPointToRay(touch.position);
            RaycastHit2D[] hits = Physics2D.RaycastAll(ray.origin, ray.direction, maxDistance);

            foreach (RaycastHit2D hit in hits)
            {
                Debug.Log(hit.collider.gameObject.name);
                Screw screw = hit.transform.GetComponent<Screw>();
                if (screw != null)
                {
                    screw.Clicked();
                    //break;
                }
            }
        }
    }

    private int GetLayerNumber<T>(T obj) where T : Component
    {
        string layerName = LayerMask.LayerToName(obj.gameObject.layer);

        if (layerName.StartsWith("Layer") && int.TryParse(layerName.Substring(5), out int layerNumber))
        {
            return layerNumber;
        }

        return -1;
    }

    public bool CheckLayer<T, V>(List<T> objectList, V objectToCheck) where T : Component where V : Component
    {
        int layerToCheck = GetLayerNumber(objectToCheck);

        if (layerToCheck == -1)
        {
            return false;
        }

        foreach (T obj in objectList)
        {
            if (obj != objectToCheck)
            {
                int layerOfOtherObject = GetLayerNumber(obj);

                if (layerOfOtherObject > layerToCheck)
                {
                    return false;
                }
            }
        }

        return true;
    }

    public T GetObjectWithHighestLayer<T>(List<T> objectList) where T : Component
    {
        T highestLayerObject = null;
        int highestLayer = -1;

        foreach (T obj in objectList)
        {
            int layer = GetLayerNumber(obj);

            if (layer > highestLayer)
            {
                highestLayer = layer;
                highestLayerObject = obj;
            }
        }

        return highestLayerObject;
    }
}
