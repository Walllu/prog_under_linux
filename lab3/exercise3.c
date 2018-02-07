#include <stdio.h>

struct TwoDPoint {
	double x, y;
};

typedef struct TwoDPoint TwoDPoint_t;  		// Added a typedef so the statement on line 9 makes sense
int main(void){
	TwoDPoint_t a,b = {0.0, 0.0};
	// I believe the following block is in place to separate user input from the rest of the code
	// It's not necessary
	{
		char input[100];
		puts("Please enter the x and y coordinates of the 1st point, separated by a comma.");
		fgets(input, sizeof(input), stdin);
		sscanf(input, "%lf,%lf", &(a.x), &(a.y));
		puts("Please enter the x and y coordinates of the 2nd point, separated by a comma.");
		fgets(input, sizeof(input), stdin);
		sscanf(input, "%lf,%lf", &(b.x), &(b.y));
	}
	
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
return 0;
}
