#include "../../header.h"




Vector2 f_DrawCircleSectorLinesEx(Vector2 center, float radius, float sA, float eA, float thick, Color color)
{
    Vector2 end;

    end.x = center.x + radius;
    end.y = center.y;

    DrawCircleSectorLinesEx(center, radius, sA, eA, 150, thick, color);

    return (end);
}
