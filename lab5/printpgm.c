#include <stdio.h>

void printImg(int size, unsigned char array[][size], int depth){
	int i,j;
	printf("P2 %d %d %d\n", size, size, depth);
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
