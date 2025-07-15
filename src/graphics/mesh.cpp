#include "mesh.h"
#include <GL/glew.h>

Mesh::Mesh(const std::vector<float> &vertices) {
  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);

  glBindVertexArray(VAO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(float),
               vertices.data(), GL_STATIC_DRAW);

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
  glEnableVertexAttribArray(0);

  glBindBuffer(GL_ARRAY_BUFFER, 0);
  glBindVertexArray(0); // Важно: отвязываем VAO
}

void Mesh::draw() {
  glBindVertexArray(VAO);
  glDrawArrays(GL_TRIANGLES, 0, 3);
}
