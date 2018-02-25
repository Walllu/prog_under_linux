#include <stdio.h>

// factorial program

int rfactorial(int num){
	int total=1;
	if(num == 1){
		return 1;
	} else {
		total=num*rfactorial(num-1);
	}
	return total;
}

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
		for(i=1;i<argc;i++){
			int arg;
			sscanf(argv[i], "%d", &arg);
			printf("\n%d! is %d", arg, factorial(arg));
			printf("\n%d! r is %d\n", arg, rfactorial(arg));
		}
	}
	
	return 0;
}
