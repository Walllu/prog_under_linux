#include <stdio.h>
#include <string.h>

// source code for printing an image characterized by a 2D array of integers
void printImg(int size, unsigned char array[][size], int depth){
	int i,j;
	FILE *outfile;
	outfile = fopen("myimg.pgm", "w");
	fprintf(outfile, "P2 %d %d %d\n", size, size, depth); // print image format
	// recursively print elements of array, row by row
	// inner elements are printed with a space
	// edge characters are printed with a newline
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j==size-1){
				fprintf(outfile, "%d\n",array[i][j]);
			} else {   
				fprintf(outfile, "%d ",array[i][j]);
			}
		}
	}
	fclose(outfile);
}

void printImgP5(int size, unsigned char array[][size], int depth){
	int i;
	FILE *outfile;
	outfile = fopen("mybin.pgm", "wb");
	char format[] = "P5 500 500 255\n";
	fwrite(&format, sizeof(char), size*sizeof(char), outfile);
	for(i=0;i<size;i++){
		char init[501]; strcpy(array[i], init); 
		strcat(init,"\n");
		fwrite(&init, sizeof(char), (size+1)*sizeof(char), outfile);
	}
	fclose(outfile);
}
