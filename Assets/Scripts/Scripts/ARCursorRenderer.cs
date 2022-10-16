// Copyright 2022 Niantic, Inc. All Rights Reserved.

using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.Utilities;
using UnityEngine.UI;
using Niantic.ARDKExamples.Helpers;

using UnityEngine;

// namespace Niantic.ARDKExamples.Helpers
// {
//   //! Helper script that spawns a cursor on a plane if it finds one
//   /// <summary>
//   /// A sample class that can be added to a scene to demonstrate basic plane finding and hit
//   ///   testing usage. On each updated frame, a hit test will be applied from the middle of the
//   ///   screen and spawn a cursor if it finds a plane.
//   /// </summary>
  
// }
public class ARCursorRenderer: MonoBehaviour
  {
    /// The camera used to render the scene. Used to get the center of the screen.
    public Camera Camera;

    /// The object we will place to represent the cursor!
    public GameObject CursorObject;

    public GameObject pointer;

    // [SerializeField] private Button startListeningBtn = null;
    // [SerializeField] private Button stopListeningBtn = null;

    public float size = 0.2f;

    /// A reference to the spawned cursor in the center of the screen.
    private GameObject _spawnedCursorObject;

    // private SpeechRecognizer sp = new SpeechRecognizer();
    
    private bool isPlaced = false;

    private IARSession _session;

    private void Start()
    {
      ARSessionFactory.SessionInitialized += _SessionInitialized;
    }

    private void OnDestroy()
    {
      ARSessionFactory.SessionInitialized -= _SessionInitialized;

      var session = _session;
      if (session != null)
        session.FrameUpdated -= _FrameUpdated;

      DestroySpawnedCursor();
    }

    private void DestroySpawnedCursor()
    {
      if (_spawnedCursorObject == null)
        return;

      Destroy(_spawnedCursorObject);
      _spawnedCursorObject = null;
    }

    public void SpawnFox()
    {
      //  DestroySpawnedCursor();
       _spawnedCursorObject = CursorObject;
       CursorObject.SetActive(true);
       _spawnedCursorObject.transform.localScale = new Vector3(size , size , size);
       isPlaced = true;

      //  sp = _spawnedCursorObject.GetComponent<SpeechRecognizer>();
      //  startListeningBtn.onClick.AddListener(sp.StartListening);
      //  stopListeningBtn.onClick.AddListener(sp.StopListening);
    }

    private void _SessionInitialized(AnyARSessionInitializedArgs args)
    {
      var oldSession = _session;
      if (oldSession != null)
        oldSession.FrameUpdated -= _FrameUpdated;

      var newSession = args.Session;
      _session = newSession;
      newSession.FrameUpdated += _FrameUpdated;
      newSession.Deinitialized += _OnSessionDeinitialized;
    }

    private void _OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
      DestroySpawnedCursor();
    }

    private void _FrameUpdated(FrameUpdatedArgs args)
    {
      var camera = Camera;
      if (camera == null)
        return;

      var viewportWidth = camera.pixelWidth;
      var viewportHeight = camera.pixelHeight;

      // Hit testing for cursor in the middle of the screen
      var middle = new Vector2(viewportWidth / 2f, viewportHeight / 2f);

      var frame = args.Frame;
      // Perform a hit test and either estimate a horizontal plane, or use an existing plane and its
      // extents!
      var hitTestResults =
        frame.HitTest
        (
          viewportWidth,
          viewportHeight,
          middle,
          ARHitTestResultType.ExistingPlaneUsingExtent |
          ARHitTestResultType.EstimatedHorizontalPlane
        );

      if (hitTestResults.Count == 0)
        return;

      if(isPlaced)
      {
         _spawnedCursorObject.transform.position = hitTestResults[0].WorldTransform.ToPosition();
      CursorObject.transform.LookAt
      (
        new Vector3
        (
          frame.Camera.Transform[0, 3],
          _spawnedCursorObject.transform.position.y,
          frame.Camera.Transform[2, 3]
        )
      );
        isPlaced = false;
      }

      pointer.transform.position = hitTestResults[0].WorldTransform.ToPosition();
      // if (_spawnedCursorObject == null)
      // {
      //    SpawnFox();
      // }

      // Set the cursor object to the hit test result's position
      
      // Orient the cursor object to look at the user, but remain flat on the "ground", aka
      // only rotate about the y-axis
      // _spawnedCursorObject.transform.LookAt
      // (
      //   new Vector3
      //   (
      //     frame.Camera.Transform[0, 3],
      //     _spawnedCursorObject.transform.position.y,
      //     frame.Camera.Transform[2, 3]
      //   )
      // );
    }
  }