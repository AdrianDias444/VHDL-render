#include "../header.h"



void draw_and_gate()
{
    Vector2 start;
    Vector2 end;


    DrawLine(30, 25, 100, 25, WHITE);
    DrawLine(30, 100, 100, 100, WHITE);

    draw_circle_sector(100, 65, 55, -90, 90, 150, WHITE);

    DrawLine(155, 65, 200, 65, WHITE);
}
