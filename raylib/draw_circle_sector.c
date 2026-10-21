#include "../header.h"



void draw_circle_sector(int x, int y, float radius, float sAng, float eAng, int segments, Color color)
{

    Vector2 vector;

    vector.x = x;
    vector.y = y;

    DrawCircleSectorLines(vector, radius, sAng, eAng, segments, color);
}
