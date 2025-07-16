#include <GL/glew.h>
#include "graphics/mesh.h"
#include "shader/shader.h"
#include "domain/window.h"
#include <iostream>

int main() {
    Window window(800, 600, "Render Engine");
    
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

    while (!window.shouldClose()) {
        window.clear();

        shader.use();
        triangle.draw();

        window.swapBuffers();
        window.pollEvents();
    }

    return 0;
}
