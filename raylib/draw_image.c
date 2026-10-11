#include "../header.h"

void draw_image(Texture2D image, int pos_x, int pos_y)
{
    Color color;

    color = BLACK;
    DrawTexture(image, pos_x, pos_y, color);
}
