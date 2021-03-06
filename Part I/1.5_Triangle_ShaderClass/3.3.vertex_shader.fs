#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

out vec3 ourColor;

void main()
{
    gl_Position = vec4(aPos, 1.0);
    ourColor = aColor;
}


//---------------------------------------------
// Homework2
//#version 330 core
//layout (location = 0) in vec3 aPos;
//layout (location = 1) in vec3 aColor;

//out vec3 ourColor;

//void main()
//{
//    gl_Position = vec4(aPos.x, -aPos.y, aPos.z, 1.0); 
//    ourColor = aColor;
//}
//---------------------------------------------


//---------------------------------------------
//Homework3
//#version 330 core
//layout (location = 0) in vec3 aPos;
//layout (location = 1) in vec3 aColor;

//out vec3 ourColor;
//uniform float xOffset;

//void main()
//{
//   gl_Position = vec4(aPos.x + xOffset, aPos.y, aPos.z, 1.0);
 //   ourColor = aColor;
//}
//---------------------------------------------



//---------------------------------------------
//Homework4
//#version 330 core
//layout (location = 0) in vec3 aPos;
//layout (location = 1) in vec3 aColor;

//out vec3 ourPosition;

//void main()
//{
 //   gl_Position = vec4(aPos, 1.0); 
  //  ourPosition = aPos;
//}
