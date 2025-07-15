#include "graphics/mesh.h"
#include "shader/shader.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
  if (!glfwInit())
    return -1;

  GLFWwindow *window =
      glfwCreateWindow(800, 600, "Render Engine", nullptr, nullptr);
  if (!window) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  glewExperimental = GL_TRUE;
  if (glewInit() != GLEW_OK) {
    std::cerr << "Failed to initialize GLEW" << std::endl;
    return -1;
  }

  std::cout << "OpenGL " << glGetString(GL_VERSION) << std::endl;

  Shader shader("../assets/shaders/basic.vertex.glsl",
                "../assets/shaders/basic.frag.glsl");

  std::vector<float> vertices = {-0.5f, -0.5f, 0.0f, 0.5f, -0.5f,
                                 0.0f,  0.0f,  0.5f, 0.0f};
  Mesh triangle(vertices);

  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);

    shader.use();
    triangle.draw();

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
