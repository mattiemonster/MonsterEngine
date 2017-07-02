#include "Window.h"

namespace mge {
	namespace graphics {
		int createWindow()
		{
			if (!glfwInit()) {
				LOG("Error initalising GLFW.");
				return 1;
			}
			LOG("Success loading GLFW.");

			return 0;
		}
	}
}