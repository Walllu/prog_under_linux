#include <stdio.h>

// source code for printing an image characterized by a 2D array of integers
void printImg(int size, unsigned char array[][size], int depth){
	int i,j;
	printf("P2 %d %d %d\n", size, size, depth); // print image format
	// recursively print elements of array, row by row
	// inner elements are printed with a space
	// edge characters are printed with a newline
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j==size-1){
				printf("%d\n",array[i][j]);
			} else {   
				printf("%d ",array[i][j]);
			}
		}
	}

}
