#ifndef MATH_INCLUDED
#define MATH_INCLUDED
#include <math.h> // in case the other file hasn't included math yet
#endif
#ifndef IO_INCLUDED
#define IO_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif

// a function that validates user input
double validate_input(int argc, char * argv[]){
	if(2!=argc){
		fputs("Too many inputs - just enter one double!\n", stderr);
		exit(1);
	}
	double val;
	int parsed = sscanf(argv[1], "%lf", &val);
	if(0==parsed){
		fputs("Could not parse input as a double!\n", stderr);
		exit(1);
	}
	return val;
}

