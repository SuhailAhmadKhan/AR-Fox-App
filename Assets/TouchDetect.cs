using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchDetect : MonoBehaviour
{
    public AudioSource audioSource;
    public AudioClip Cry1 , Cry2;
    public float volume=1f;
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
            if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began))
    {
        Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
        RaycastHit raycastHit;
        if (Physics.Raycast(raycast, out raycastHit))
        {
            if (raycastHit.collider.CompareTag("Player"))
            {
                audioSource.PlayOneShot(Cry2, volume);
                GetComponent<MovementFox>().Happy();
            }
        }
    }

    }
}
