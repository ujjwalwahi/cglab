/*
 * =====================================================================================
 *
 *       Filename:  hut.c
 *
 *    Description:  Draw a hut using graphics library
 *
 *        Version:  1.0
 *        Created:  Sunday 16 August 2015 12:28:51  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ujjwal Wahi 
 *
 * =====================================================================================
 */


 #include <stdlib.h>
 #include <graphics.h>
 #include <functions.h>
 
 int
 main ( int argc, char *argv[] )
 {
 	int gd = DETECT, gm;
 	int x=100,y=100;
 	ginit(&gd, &gm, 6);
 
 	/* hut top triangle */
 	line(x,y, x-20, y+30); // left line
 	line(x,y, x+20, y+30); // right line
 	line(x-20,y+30, x+20, y+30); // join left and right lines
 
 	/* hut roof */
 	line(x,y, x+100, y); // roof top line
 	line(x+20,y+30, x+100, y+30); // roof bottom line
 	line(x+100, y, x+100, y+30); // join top and bottom lines
 
 	/* hut gate */
 	line(x-20, y+30, x-20, y+100); // left
 	line(x+20, y+30, x+20, y+100); // right
 	line(x-20, y+100, x+20, y+100); // bottom
 
 	/* hut room */
 	line(x+20, y+100, x+100, y+100); // bottom
 	line(x+100, y+30, x+100, y+100); // right
 
 	gclose();
 	return 0;
 }
