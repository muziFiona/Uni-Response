# Unity - Lab 01 06-01-2020

## Snake Line Game
[![The line Game](https://github.com/muziFiona/Uni-Response/blob/master/Advanced_Visualisation_and_Computational_Environments/Week1_06_01_2020/media/VID_20200120_001330_Moment.jpg)](https://youtu.be/U2EbtUndXVg)

Use only lines to spilit the paper, and have 4 cross as the challenge part. Use a bead to pass through all the cross, you need to restart if the bead crosses the wrong path. The 4 crosses on the paper can be challenge part to increase difficulty to the player (ie. one question for each cross, you need to answer before you can go on (Maths for example)).
## Try out "GetKey" on Unity for translating camera and the cube object in Unity

[![practice](https://github.com/muziFiona/Uni-Response/blob/master/Advanced_Visualisation_and_Computational_Environments/Week1_06_01_2020/media/2020-01-19%2022-15-23_Moment.jpg)](https://youtu.be/5QKN94XR8ss)

>
     void Update()
    {

        if (Input.GetKey("w")) { transform.Translate(0, 0, 0.1f); }
        //to use w to move camera path on z axis
        if (Input.GetKey("e")) { transform.Translate(0, 0, -0.1f); }
        //to use e to move camera path on z axis
        if (Input.GetKey("q")) { transform.Translate(0, 0.1f, 0); }
        //to use q to move camera path on y axis
        if (Input.GetKey("r")) { transform.Translate(0, -0.1f, 0); }
        //to use r to move camera path on y axis

    }

## Example TryOut

### Try with Mathf 

[![TryOut](https://github.com/muziFiona/Uni-Response/blob/master/Advanced_Visualisation_and_Computational_Environments/Week1_06_01_2020/media/2020-01-20%2000-49-58_Moment.jpg)](https://youtu.be/RhFpDHxOOeU)

Parts that change
>
   x = Mathf.Sin(Mathf.Deg2Rad * angle) / radius; 
   y = Mathf.Tan(Mathf.Deg2Rad * angle) * radius;


### Try with Time.time
[![TryOut](https://github.com/muziFiona/Uni-Response/blob/master/Advanced_Visualisation_and_Computational_Environments/Week1_06_01_2020/media/2020-01-20%2001-11-44_Moment.jpg)](https://youtu.be/vOI-VDBWYG8)

Parts that change
>   
    gameObject.transform.localScale = new Vector3(Mathf.Sin(w2)*Time.time, Mathf.Tan(h2), Mathf.PI);
    return go; 

