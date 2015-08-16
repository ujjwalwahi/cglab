/*
 * =====================================================================================
 *
 *       Filename:  line.c
 *
 *    Description:  Draw a line using DDA and Bresenham algorithms
 *
 *        Version:  1.0
 *        Created:  Sunday 16 August 2015 21:13:08 IST
 *       Compiler:  gcc
 *
 *         Author:  Ujjwal Wahi 
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <functions.h>

#define LINECOLOR 6

void dda(int, int, int, int);
void bresenham(int, int, int, int);

int
main ( int argc, char *argv[] )
{
   int gd = DETECT, gm;
   ginit(&gd, &gm, 6);  

   // test for slope between 0 and 1
   dda(10, 11, 15, 14);

   // test for slope between 0 and -1
   dda(100, 100, 150, 80);

   // test for slope > 1
   dda(300, 250, 400, 400);

   gclose();
   return 0;
}

void
dda(int x1, int y1, int x2, int y2)
{
    int steps, dx, dy, k;
    float xi, yi, x, y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        // absolute value of slope is between 0 and 1
        steps = abs(dx);
    }
    else
    {
        // absolute value of  slope is greater than 1
        steps = abs(dy);
    }
 
    xi = dx / (float) steps;
    yi = dy / (float) steps;
 
    x = x1;
    y = y1;     
 
    for (k = 0; k < steps; k++) {
        putpixel(x, y, LINECOLOR);
        x += xi;
        y += yi;        
    }
}

void bresenham(int x1, int y1, int x2, int y2)
{
    //    
}