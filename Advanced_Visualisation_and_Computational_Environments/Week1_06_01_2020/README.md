# Unity - Lab 01 06-01-2020

## Try out "GetKey" on Unity for translating camera and the cube object in Unity

[![practice](img)](https://youtu.be/5QKN94XR8ss)

>    void Update()
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