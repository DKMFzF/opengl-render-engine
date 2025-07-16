#include "window.h"
#include <iostream>

Window::Window(int width, int height, const std::string& title) {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return;
    }

    m_window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    if (!m_window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(m_window);
}

Window::~Window() {
    if (m_window) {
        glfwDestroyWindow(m_window);
    }
    glfwTerminate();
}

bool Window::shouldClose() const {
    return glfwWindowShouldClose(m_window);
}

void Window::swapBuffers() const {
    glfwSwapBuffers(m_window);
}

void Window::pollEvents() const {
    glfwPollEvents();
}

void Window::clear() const {
    glClear(GL_COLOR_BUFFER_BIT);
}
