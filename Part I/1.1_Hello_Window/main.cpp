
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>	

//settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

// Function prototypes
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

int main() {

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	//glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	//glad: load all OpenGL function pointers

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initializate GLAD" << std::endl;
		return -1;
	}

	float red;

	//Render Loop
	while (!glfwWindowShouldClose(window))
	{
		//input
		processInput(window);

		red = (1 + sin(glfwGetTime())) / 2.0;
		glClearColor(red, 0.3f, 0.3f, 1.0f);
		//glClearColor(1.0f, 0.0f, 0.0f, 1.0f);	  
		glClear(GL_COLOR_BUFFER_BIT);

		glfwPollEvents();
		glfwSwapBuffers(window);
	}

	// Terminate GLFW, clearing any resources allocated by GLFW.
	//system("pause");
	glfwTerminate();
	return 0;
}

//glfw: ogni qualvolta la finestra viene ridemensionata (dall'OS o dall'utente) questa funzione di callback viene eseguita

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}

//processiamo tutti gli input, GLFW rileva la pressione dei tasti della tastiera, impostiamo ESC per terminare il programma.
void processInput(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}






