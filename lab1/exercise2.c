#include <stdio.h>

int main(void){
	//The constant integer that was requested
	const int i = 5;
	printf("i = %2d\n",i);
	printf("i + 2 = %2d\n",i+2);
	printf("i - 2 = %2d\n",i-2);
	printf("i * 2 = %2d\n",i*2);
	printf("i / 3 = %2.2f\n",(float)i/3);
	printf("i % 2 = %2d\n",i%2);
	return 0;
}
