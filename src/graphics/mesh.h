#pragma once
#include <vector>

class Mesh {
public:
  Mesh(const std::vector<float> &vertices);
  void draw();

private:
  unsigned int VAO, VBO;
};
