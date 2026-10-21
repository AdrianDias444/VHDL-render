#include "../header.h"



void draw_poly(int x, int y, int sides, float radius, float rotation, Color color)
{
    Vector2 vector;
    int     s;
    float   r;
    float   rot;
    Color   c;


    vector.x = x;
    vector.y = y;

    s = sides;

    r = radius;

    rot = rotation;

    c = color;
    DrawPoly(vector, s, r, rot, c);
}
