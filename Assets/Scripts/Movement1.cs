using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    CharacterController characterController;

    public float speed = 6.0f;
    public float jumpSpeed = 8.0f;
    public float gravity = 20.0f;
    public float acc = 0.1f;
    public float TurnSensitivity = 0.1f;

    private Vector3 moveDirection = Vector3.zero;

    private Animator animator;

    private float velocity = 0;
    private float h = 0;

    void Start()
    {
        characterController = GetComponent<CharacterController>();
        animator = GetComponent<Animator>();
    }

    void FixedUpdate()
    {
        float v = Mathf.Clamp(Input.GetAxis("Vertical"), 0, 1);
        float temp_h = Input.GetAxis("Horizontal");
        h += temp_h * 0.1f;
        h = Mathf.Clamp(h, -1, 1);

        if (temp_h == 0)
            h = Mathf.Lerp(h, 0, Time.deltaTime * 2);
    
        if(temp_h == 0 && Mathf.Abs(h) < 0.05f)
            h = 0;



        if (v > 0 || Mathf.Abs(temp_h) > 0)
        {
            velocity += (v > 0 ? v : Mathf.Abs(h)) * acc;
        }
        else
        {
            velocity -= Time.deltaTime;
        }

        //if (characterController.isGrounded)
        //{
        //    // We are grounded, so recalculate
        //    // move direction directly from axes
            
        //    moveDirection = new Vector3(h, 0.0f, v);
        //    moveDirection *= speed;

        //    if (Input.GetButton("Jump") )
        //    {
        //        animator.SetTrigger("Jump");
        //        moveDirection.y = jumpSpeed;  
        //    }
        //}

        velocity = Mathf.Clamp(velocity, 0, 1);
        animator.SetFloat("Speed", velocity);
        animator.SetFloat("Turn" , h);

        if (Input.GetButton("Jump") && !animator.IsInTransition(0))
        {
            animator.SetTrigger("Jump");
            //moveDirection.y = jumpSpeed;
        }
        
        // Apply gravity. Gravity is multiplied by deltaTime twice (once here, and once below
        // when the moveDirection is multiplied by deltaTime). This is because gravity should be applied
        // as an acceleration (ms^-2)
        moveDirection.y -= gravity * Time.deltaTime;

        // Move the controller
       // characterController.Move(moveDirection * Time.deltaTime);

    }
}
