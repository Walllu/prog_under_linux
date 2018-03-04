#ifndef MATH_INCLUDED
#define MATH_INCLUDED
#include <math.h> // include math header if it hasn't been included yet
#endif

#ifndef IO_INCLUDED
#define IO_INCLUDED // a definition used in the project to show that the following headers are included
#include <stdio.h> // include these headers if they haven't been include yet
#include <stdlib.h>
#include <string.h>
#endif

// include the headers themselves
#include "complexmath.h"
#include "validate.h"

int main (int argc , char * argv []) {
	double x, cub_x , re_cub_x , im_cub_x ;
	x = validate_input (argc , argv); // this validation function comes from validate.h
	cub_x = cbrt(x); //this comes from math.h, computes the cube root of a double
	re_cub_x = re_complexroots ( cub_x ); // this comes from complexmath.h, computes the real roots of a cube root
	im_cub_x = im_complexroots ( cub_x ); // this comes from complexmath.h, computes the imaginary roots of a cube root
	printf ("The cube roots of %f are %f, %f + %fi and %f - %fi .\n", x, cub_x , re_cub_x , im_cub_x , re_cub_x ,im_cub_x );
return 0;
}
