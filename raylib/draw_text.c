#include "../header.h"


void draw_normal_text(char* text, int pos_x, int pox_y, Color color)
{
    int fontsize;

    fontsize = 36;
    DrawText(text, pos_x, pox_y, fontsize, color);
}
