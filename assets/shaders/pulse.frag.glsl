#version 330 core
in vec3 fragPos;
out vec4 FragColor;

uniform float time;

void main() {
    vec2 uv = fragPos.xy;
    float pulse = sin(time * 2.0) * 0.5 + 0.5;
    FragColor = vec4(uv.x * pulse, uv.y * (1.0 - pulse), pulse, 1.0);
}

