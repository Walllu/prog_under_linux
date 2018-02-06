#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
	// we want to make an array of numbers ranging from MIN=0 to MAX=255 (for example)
	// we then want to display this as an image (.pgm format) by redirecting this array by pipe
	int MAX = 500;
	int DEPTH = 255;
	//char format[16];
	printf("P2 %d %d %d\n", MAX, MAX, DEPTH);
	//sprintf(format, "P2 %d %d %d\n", MAX, MAX, DEPTH); // set the format
	unsigned char img[MAX*2 + 1][MAX];
	// the following is for generating random numbers
	time_t t; // rand seed init
	srand(time(NULL));
	// now populate the array
	int i, j;
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			img[i][j] = (char)rand()%(DEPTH);
		}
	} 
	// now that the array is populated, you can simply printf each array element
	//printf(format);
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(j==MAX-1){
				printf("%d\n",img[i][j]);
			} else {
				printf("%d ",img[i][j]);
			}
		}
	}
	return 0;
}
