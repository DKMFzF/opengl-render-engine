#pragma once

#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
    Window(int width, int height, const std::string& title);
    ~Window();

    bool shouldClose() const;
    void swapBuffers() const;
    void pollEvents() const;
    void clear() const;

    GLFWwindow* getNativeWindow() const { return m_window; }

private:
    GLFWwindow* m_window;
};
