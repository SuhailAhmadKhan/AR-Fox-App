using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDK;

public class MovementFox : MonoBehaviour
{
    CharacterController characterController;

    public float speed = 6.0f;
    public float jumpSpeed = 8.0f;
    public float gravity = 20.0f;
    public float acc = 0.1f;
    public float TurnSensitivity = 0.1f;

    public GameObject Berry;

    private Vector3 moveDirection = Vector3.zero;

    private Animator animator;

    private Vector3 dest;

    private bool isFollowing = false;

    private float velocity = 0;
    private float h = 0;
    private GameObject _berry;

    public GameObject cursor;
    // private IAR

    void Start()
    {
        characterController = GetComponent<CharacterController>();
        animator = GetComponent<Animator>();
    }

    public void Jump()
    {
        animator.SetTrigger("Jump");

    }
    public void Attack()
    {
        animator.SetTrigger("Attack");
   
    }
    public void Run()
    {
        velocity = 0.3f;
        h = -1;

    }
    public void Idle()
    {
        velocity = 0;
        h = 0;
        isFollowing = false;
    }
    public void Happy()
    {
         animator.SetTrigger("Happy");
    }
    public void Roll()
    {
        animator.SetTrigger("Roll");
    }
    public void Follow()
    {
        isFollowing = true;
        transform.LookAt(dest);
        // h = Vector3.Dot(transform.forward , dest - transform.position); 
        // Debug.Log("Following " + h);
        // Debug.Log(Vector3.Magnitude(transform.position - dest));
    } 

    public void SetDestination()
    {
        dest = cursor.transform.position;
        if(_berry == null)
            _berry = Instantiate(Berry , dest , Quaternion.identity);
    }

    void FixedUpdate()
    {
        
        if(isFollowing)
        {
            // h = Vector3.Dot(transform.forward , dest - transform.position); 
            // h = Mathf.Clamp(h, -1, 1);
            // h = Mathf.Lerp( h , 1 , ( h > 0 ? (Mathf.Abs(Vector3.Dot(transform.forward , dest - transform.position) + 1) )* 0.01f : (1 - Vector3.Dot(transform.forward , dest - transform.position)) * 0.01f  ) ) ;
            //   if(Mathf.Abs(h) < 0.05f)
            //     h = 0;
            if(Vector3.Magnitude(transform.position - dest) < 0.1)    
            {
                isFollowing = false;
                Destroy(_berry);
                velocity = 0;
            }
            else if(Vector3.Magnitude(transform.position - dest) < 0.5)
            {
                velocity -= Time.deltaTime;
            }
            else{
                velocity += Time.deltaTime;       
            }
             velocity = Mathf.Clamp(velocity, 0, 1);

        }

        // float v = Mathf.Clamp(Input.GetAxis("Vertical"), 0, 1);
        // float temp_h = Input.GetAxis("Horizontal");
        // h += temp_h * 0.1f;
        // h = Mathf.Clamp(h, -1, 1);

        // if (temp_h == 0)
        //     h = Mathf.Lerp(h, 0, Time.deltaTime * 2);
    
        // if(temp_h == 0 && Mathf.Abs(h) < 0.05f)
        //     h = 0;



        // if (v > 0 || Mathf.Abs(temp_h) > 0)
        // {
        //     velocity += (v > 0 ? v : Mathf.Abs(h)) * acc;
        // }
        // else
        // {
        //     velocity -= Time.deltaTime;
        // }


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
     //  moveDirection.y -= gravity * Time.deltaTime;

        // Move the controller
       // characterController.Move(moveDirection * Time.deltaTime);

    }
}
