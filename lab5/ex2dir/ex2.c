#include <stdio.h>
#include "/usr/share/p2t/lab05/Exe2/turtle.h"
#include <string.h>
#include <math.h>
#define MPI acos(-1)

//write a program that draws an "n-gon" given a command line input
int main(int argc, char * argv[]){
	if(argc==1){
		printf("\nYou need to input a number as an argument!\n");
		return 1;
	}
	if(strcmp(argv[1],"square")==0){
		//code for a 4-gon
		turtle_init(256,256); //draw 256x256 px drawing surface
		turtle_reset(); // center
		turtle_pen_up(); // don't draw
		//get turtle to starting position
		turtle_forward(80);
		turtle_set_heading(90);
		turtle_forward(80);
		turtle_set_heading(180);
		turtle_pen_down();
		int i;
		for(i=0;i<4;i++){
			turtle_forward(160);
			turtle_turn_left(90);
		}
		turtle_save_png("mylogo.png"); // save picture
		return 0;
	}
	// parse the input 
	double arg;
	sscanf(argv[1], "%lf", &arg);
	if(arg<=2){
		printf("\nYou try drawing a 2-gon or less, it's not that easy!\n");
	} else if(arg>2){
		int inrad = 50; //the initial distance turtle moves out
		//code for an n-gon
		turtle_init(256,256); //create 2D field
		turtle_reset();       //set turtle on 0,0
		turtle_pen_up();      //disable draw
		turtle_forward(inrad); // inital move out
		turtle_set_heading(-90); //90 should point up but it points down for some reason???

		double internal_angle =180*((arg-2)/arg); //internal angle of n-gon
		double turn_by = 180 - internal_angle; // I think I need to turn by this much??

		//printf("Angle : %lf Arg : %d\n", angle, arg);
		int dist = 2*inrad*sin(MPI/arg);//side lengths of an n-gon
		int i;
		// draw the n-gon already!
		turtle_pen_down();
		for(i=0;i<arg;i++){
			turtle_forward(dist);
			turtle_turn_right(turn_by);
		}
		turtle_save_png("mylogo.png"); // save the image
	} else {
		printf("\nTry again, something went wrong!\n");
		return 1;
	}

return 0;
}



