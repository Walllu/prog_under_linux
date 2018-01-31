#include <stdio.h>
#include <math.h>

int main(void){
	// Square free program
	// see if a provided number is square free or not
	// via trial division
	int loop = 1;
	// get user input
	do {
	int inpnum;
	char again, buffer[50];
	printf("Enter a number to see if it's \'square-free\':\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &inpnum);
	double sq = floor(sqrt(inpnum)); // the largest square underneath inpnum
	printf("sq %f\n", sq);
	if(fmod(sqrt(inpnum),1)==0){
		printf("You typed in a square!\n");
	} else {
		int found = 0; // a boolean flag, to see if we found a square divisor orn ot
		for(int i=1;i<=sq;i++){
			printf("%d -- %d\n",i, inpnum);
			if(inpnum%(i^2)==0){
				printf("The square %d divides %d ..\n", i^2, inpnum);
				found = 1;
			break;
			}
		}
		if(found==0){
			printf("You\'re square-free!\n");
		}
		
	}

	// ask if you want to go again
	printf("Do you want to go again? (y/n) \n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%c", &again);
	if(again=='n'){
		loop = 0;
	}
	} while(loop);	
return 0;
}
