#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

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

// a function that prints an array to standard output
void printImg(int sqsize, unsigned char array[][sqsize], int depth){
	int i,j;
	printf("P2 %d %d %d\n",sqsize,sqsize,depth); // initial format for a PGM image
	for(i=0;i<sqsize;i++){
		for(j=0;j<sqsize;j++){
			if(j==sqsize-1){
				printf("%d\n",array[i][j]); // end of line
			} else {
				printf("%d ",array[i][j]); 
			}
		}
	}
}

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
