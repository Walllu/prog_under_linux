#include <stdio.h>

int main(void){
	int loop = 1; // something used to determine when to end the loop
	do {
	float x, y;
	char op, buffer[100];
	printf("Enter a calculation in he form 6 + 2.5\n Type \'1 q\' to quit\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%f %c %f", &x, &op, &y);
	float answer; // Up until this poin, we just get the input
	switch(op){
		case '+': // case statemetns to modify behavior
			answer = x + y;
			printf("%2.2f %c %2.2f = %2.2f\n",x,op,y,answer);	
			break;
		case '-':
			answer = x - y;
			printf("%2.2f %c %2.2f = %2.2f\n",x,op,y,answer);
			break;
		case '*':
			answer = x * y;
			printf("%2.2f %c %2.2f = %2.2f\n",x,op,y,answer);
			break;
		case '/':
			answer = x / y;
			printf("%2.2f %c %2.2f = %2.2f\n",x,op,y,answer);
			break;
		case 'q':
			loop = 0;
			printf("See ya!\n");
			break;
		default:
			printf("Not an op\n");
		}
	printf("\n");
	} while (loop); // the loop condition
return 0;
}
