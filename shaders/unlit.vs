#version 400

layout (location = 0) in vec3 vPos;
layout (location = 1) in vec3 vNormal;

out vec3 color;

void main()
{
   color = 0.5 * (vNormal + vec3(1.0));
   gl_Position = vec4(vPos, 1.0);
}
