#version 330 core
out vec4 FragColor;

in vec3 ourColor;
void main()
{
  FragColor = vec4(ourColor, 1.0f);
}


//Homework1
//#version 330 core
//out vec4 FragColor;
//uniform vec4 ourColor;

//void main()
//{
//   FragColor = ourColor;
//};

//Homework4
//#version 330 core
//out vec4 FragColor;
//in vec3 ourPosition;

//void main()
//{
//    FragColor = vec4(ourPosition, 1.0);   
//}

