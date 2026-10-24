#ifndef HEADER_H
#define HEADER_H


#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <raylib.h>
#include <curses.h>
#include <fcntl.h>

#include "lib/lib.h"

// my raylib modified functions
void draw_normal_text(char* text, int pos_x, int pos_y, Color color);
void draw_image(Texture2D image, int pos_x, int pos_y);
Texture2D load_texture(char* file);

Vector2 f_DrawCircleSectorLinesEx(Vector2 center, float radius, float sA, float eA, float thick, Color color);
Vector2 f_DrawLineEx(Vector2 start, Vector2 end, float thick, Color color);


t_and2* draw_and_gate();



// utility functions
void endProgram();


//-----------------------
// struct for parser
typedef struct s_gates {
    int and_gates;
    int or_gates;
    int not_gates;
} t_gates;

//----------------------
// struct for node, can be a input or output node
typedef struct s_node {
    int     signal;
    Vector2 vector;
} t_node;

typedef struct s_and2 {
    t_node*   output;
    t_node* input1;
    t_node* input2;
} t_and2;


// parser functions
t_gates* parser_file(char* file);


#endif
