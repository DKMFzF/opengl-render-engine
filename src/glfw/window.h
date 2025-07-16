#pragma once
#include <GLFW/glfw3.h>
#include <iostream>

class Window {
public:
  Window(int width, int height, const std::string& title);
  ~Window();

  bool shouldClose() const;
  void swapBuffer() const; 
  void pollEvents() const;
  void clear() const;

  GLFWwindow* getNativeWindow() const { return m_window; }
private:
  GLFWwindow* m_window;
}

