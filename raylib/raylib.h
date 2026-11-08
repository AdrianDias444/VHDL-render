#ifndef RAYLIB_H
#define RAYLIB_H


//----------------
// gates alloc
t_and2*	alloc_and2();
t_node* alloc_node(Vector2 vector);

// gates draw
t_and2* draw_and_gate(t_node* input1, t_node* input2);


//----------------
// utils
Vector2 f_DrawCircleSectorLinesEx(Vector2 center, float radius, float sA, float eA, float thick, Color color);
Vector2 f_DrawLineEx(Vector2 start, Vector2 end, float thick, Color color);


//----------------
// main draw function

void draw(t_gates* gates);


#endif