#version 430 core

out vec4 fColor;

in vec2 vTextureCoord;

uniform sampler2D  sampler;
uniform int surface_effect;
uniform vec4 diffuse_color;

void main()
{
    if(surface_effect == 0) {
        fColor = 1 - diffuse_color * texture(sampler, vTextureCoord);
    } else if(surface_effect == 1) {
        fColor = 1 - texture(sampler, vTextureCoord);
    } else if(surface_effect == 2) {
        fColor = 1 - diffuse_color;
    } else {
        fColor = 1 - vec4(0,1,0,1);
    }
}
