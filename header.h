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
void draw_poly(int x, int y, int sides, float radius, float rotation, Color color);
void draw_circle_sector(int x, int y, float radius, float sAnd, float eAng, int segments, Color color);
void draw_and_gate();



// utility functions
void endProgram();


typedef struct s_gates {
    int and_gates;
    int or_gates;
    int not_gates;
} t_gates;

// parser functions
t_gates* parser_file(char* file);


#endif
