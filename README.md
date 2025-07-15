# Shader Engine

Shaders-Engine is a lightweight, educational rendering engine built with C++ and OpenGL, designed to simplify shader development and real-time graphics experimentation. It provides a structured framework for creating and managing shaders, meshes, and rendering pipelines.

## Project Structure

The engine follows a modular architecture with clear separation of concerns:

Core Layers

- Application	Manages the GLFW window, input, and main loop (`main.cpp`)
- Shader	Compiles and manages GLSL shaders (`shader/shader.{h,cpp}`)
- Graphics	Handles mesh data, VAO/VBO setup, and rendering (`graphics/mesh.{h,cpp}`)
- Assets	Stores shaders (`assets/shaders/`) and future `textures/models`

## Structure

```
Shaders-Engine/
├── src/
│   ├── main.cpp             (Application entry point)
│   ├── shader/
│   │   ├── shader.h         (Shader class declaration)
│   │   └── shader.cpp       (Shader loading/compilation)
│   └── graphics/
│       ├── mesh.h           (Mesh class declaration)
│       └── mesh.cpp         (Mesh rendering logic)
├── assets/
│   └── shaders/             (GLSL shaders)
│       ├── *.vert           (Vertex shaders)
│       └── *.frag           (Fragment shaders)
```

## Getting Started

```
1. git clone https://github.com/DKMFzF/shaders-engine-v0.4.git
2. make
```
