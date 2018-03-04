#ifndef MATH_INCLUDED
#define MATH_INCLUDED
#include <math.h> // include math if it hasn't been included yet
#endif

double re_complexroots(double z){
	return -1.0*z/2.0;
}

double im_complexroots(double z){
	return sqrt(3.0)/(z/2.0);
}


