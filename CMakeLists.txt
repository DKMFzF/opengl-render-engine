cmake_minimum_required(VERSION 3.10)
project(Engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

find_package(GLEW REQUIRED)

set(SOURCES
    src/main.cpp
    src/shader/shader.cpp
    src/graphics/mesh.cpp
    src/domain/window.cpp
)

add_executable(engine ${SOURCES})

target_link_libraries(engine
    ${OPENGL_LIBRARIES}
    glfw
    GLEW::GLEW
)

target_include_directories(engine PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

