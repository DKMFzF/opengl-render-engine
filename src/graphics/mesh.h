#pragma once
#include <vector>

class Mesh {
public:

  // vertices - array with point on mesh
  Mesh(const std::vector<float> &vertices);
  
  // draw mesh on screen
  void draw();

private:

  // variables for buffer identifiers
  unsigned int VAO, VBO;
};
