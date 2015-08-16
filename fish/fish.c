/*
 * =====================================================================================
 *
 *       Filename:  fish.c
 *
 *    Description:  Draw a moving fish
 *
 *        Version:  1.0
 *        Created:  Sunday 16 August 2015 15:50:05 IST
 *       Compiler:  gcc
 *
 *         Author:  Ujjwal Wahi 
 *
 * =====================================================================================
 */

 #include <stdlib.h>
 #include <graphics.h>
 #include <functions.h>
 
 #define FORWARD 1
 #define BACKWARD -1
 
 void fish(int, int, int);
 
 int
 main ( int argc, char *argv[] )
 {
 	int gd = DETECT, gm;
 	int x=200, is_forward=1, direction=FORWARD;
 	ginit(&gd, &gm, 6);
 
 	while(!kbhit()) {	
 		if(is_forward) {
 			x+=10;
 			if(x>500) {
 				is_forward=0;
 				direction=BACKWARD;
 			}
 		}
 		else {
 			x-=10;
 			if(x<100) {
 				is_forward=1;
 				direction=FORWARD;
 			}
 		}		
		 
 		fish(x, 200, direction);	
 	}
	 
 	gclose();
 	return 0;
 }
 
 void
 fish(int x, int y, int direction) {
 	int tailx, taily;
 
 	cleardevice();
 
 	// fish body
 	ellipse(x, y, 0, 360, 50,10);
 
 	// fish eye
 	circle(x+40*direction, y, 2);
 
 	// fish tail
 	tailx = x-50*direction;
 	taily = y;		
 	line(tailx, taily, tailx-25*direction, taily-15);
 	line(tailx, taily, tailx-25*direction, taily+15);
 	line(tailx-25*direction, taily-15, tailx-25*direction, taily+15);
 }