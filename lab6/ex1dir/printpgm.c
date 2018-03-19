#include <stdio.h>
#include <string.h>

// This function stores a PGM
// the fle format is less compact and takes more time to read/write than the binary format
// but it is human readable, and perhaps more intuitive for people to use
// making it less prone to human programming error
void storeImg(int size, unsigned char array[][size], int depth){
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


// This function stores a binary PGM
// this file format is more compact and takes less time to read/write
// but the process is more manual, and prone to human logic/arithmetic errors
// that could damage other files on disk/memory
void storeImgP5(int size, unsigned char array[][size], int depth){
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
