#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "printpgm.h"

// a function that accepts a pointer to an array and randomly generates a number for each spot
void generateImg(int sqsize, unsigned char array[][sqsize], int depth){
	srand(time(NULL)); // seed the random number generator with current time
	int i,j;
	for(i=0;i<sqsize;i++){
		for(j=0;j<sqsize;j++){
			array[i][j] = (char)rand()%(depth); // unsigned chars are convenient for storage, 1 byte
		}
	}
}


// A command-line facing program that can be called to generate a random PGM image
// The output is to stdout, allowing this program to be piped to the display function in bash
int main(int argc, char * argv[]){
	if(argc==2&&strcmp(argv[1],"-h")==0){
		printf("This is a program that generates a random staticy image");
	} else {
		int MAX = 500;
		int DEPTH = 255;
		unsigned char img[MAX*2+1][MAX]; // make the array
		generateImg(MAX,img,DEPTH);
		printImg(MAX,img,DEPTH);		
	}
return 0;
}
