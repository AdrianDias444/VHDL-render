#include "../header.h"


Texture2D load_texture(char* file)
{
    Texture2D texture = LoadTexture(file);
    return(texture);
}
