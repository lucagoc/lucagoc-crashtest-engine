#version 450

vec2 positions[3] = vec2[](
    vec2(0.0, -0.5),
    vec2(0.5, 0.5),
    vec2(-0.5, 0.5)
);

void main() {
    // gl_VertexIndex is a built-in variable that contains the index of the vertex
    // 0.0 = Z-axis front
    gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0); 
}