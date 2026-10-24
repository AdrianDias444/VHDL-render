#include "../header.h"

#define


t_and2* draw_and_gate()
{
    Vector2 start;
    Vector2 end;
    float   thick;
    float   radius;
    t_and2* and;

    // need to make this function
    // create_and2() allocate memory
    and = create_and2();

    thick = 5;
    radius = 53;

//------------------
    start.x = 30;
    start.y = 30;
    and->input1 = start;

    end.x = 100;
    end.y = 30;

    f_DrawLineEx(start, end, 5, WHITE);
//------------------
    start.x = 30;
    start.y = 100;
    and->input2 = start;

    end.x = 100;
    end.y = 100;
    f_DrawLineEx(start, end, 5, WHITE);

//-------------------
    start.x = 100;
    start.y = 10;

    end.x = 100;
    end.y = 120;

    f_DrawLineEx(start, end, 5, WHITE);


//---------------
    start.x = 100;
    start.y = 10;

    end.x = 160;
    end.y = 10;

    f_DrawLineEx(start, end, 5, WHITE);


    start.x = 100;
    start.y = 120;

    end.x = 160;
    end.y = 120;

    f_DrawLineEx(start, end, 5, WHITE);

//------------------
    start.x = 160;
    start.y = 64.5;
    

    DrawRingLinesEx(start, radius, radius+5,  -90, 90, 150,  5, WHITE);
    end.x = 160 + radius;
    end.y = 64.5;
    and -> output = end;
    
}
