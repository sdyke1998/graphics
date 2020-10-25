#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}

int main() {

	if (!glfwInit())
	{
		// Initialization failed
	}

	glfwSetErrorCallback(error_callback);

	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	if (!window)
	{
		// Window or OpenGL context creation failed
	}

	glfwTerminate();
	return 0;
}