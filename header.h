#ifndef HEADER_H
#define HEADER_H


#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <raylib.h>
#include <curses.h>

#include "lib/lib.h"


void draw_normal_text(char* text, int pos_x, int pos_y, Color color);
void draw_image(Texture2D image, int pos_x, int pos_y);


#endif
