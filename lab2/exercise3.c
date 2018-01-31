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
	printf("\n");
	printf("Enter a number to see if it's \'square-free\':\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &inpnum);
	double sq = floor(sqrt(inpnum)); // the largest square underneath inpnum
	printf("sq %f\n", sq);
	// if the number you typed in is a square
	if(fmod(sqrt(inpnum),1)==0||inpnum==2){
		printf("You typed in a square!\n");
	} else{
		int found = 0; // a boolean flag, to see if we found a square divisor orn ot
		// for every number less that the largest possible square divisor
		for(int i=2;i<=sq;i++){
			printf("%d\n",i);
			if(fmod(inpnum,i*i)==0){
				printf("-----%d\n",i);
				printf("The square %d divides %d ..\n", i*i, inpnum);
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
