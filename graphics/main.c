#define GLFW_INCLUDE_NONE
#include <stdio.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>

#include "glad/gl.h"
#include "linmath.h"

void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {

	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);
}

int main() {

	double time = glfwGetTime();

	if (!glfwInit())
	{
		// Initialization failed
	}

	glfwSetErrorCallback(error_callback);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	if (!window)
	{
		// Window or OpenGL context creation failed
	}
	glfwMakeContextCurrent(window);
	glfwSetKeyCallback(window, key_callback);

	int width, height;
	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);

	glfwSwapBuffers(window);
	glfwSwapInterval(1);
	glfwPollEvents();

	while (!glfwWindowShouldClose(window)) {
		//Keep running
	}

	glfwDestroyCursor(window);
	glfwTerminate();
	return 0;
}