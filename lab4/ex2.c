#include <stdio.h>

// factorial program

int factorial(int num){
	int total = 1, i;
	for(i=1;i<=num;i++){
		total*=i;
	}
	return total;
}


int main(int argc, char * argv[]){
	if(argc<2){
		printf("\nYou need to input a number!\n");
	} else {
		int i;
		for(i=1;i<=argc;i++){
			printf("\n%d! is %d\n",(int)(*argv[i]),factorial((int)*argv[i]));
		}
	}
	
return 0;
}
