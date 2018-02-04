#include <stdio.h>

int main(void){
	char op, buffer[100];
	float x;
	int y;

	printf("Enter float, character, and int\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%f %c %d", &x, &op, &y);
	printf("This is the contents of x: %.2f\n", x);
	printf("This is the contents of op: %c\n",op);
	printf("This is the contents of y: %d\n",y);
}
