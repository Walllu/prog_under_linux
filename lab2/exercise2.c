#include <stdio.h>

int main(void){
printf("Input a number\n\n");
int x;
char buffer[100];
fgets(buffer, sizeof(buffer), stdin);
sscanf(buffer, "%d", &x);
if(x>0&&x<=99){
for(int i = x; i>=1; i--){
	if(i>1){
	printf("%d Green Bottles, sitting on the wall\n",i);
	printf("%d Green Bottles, sitting on the wall\n",i);
	printf("and if 1 Green Bottle should accidentally fall...\n");
		if(i==2){
	printf("...there\'ll be 1 Green Bottle, sitting on the wall.\n");
		} else {
	printf("...there\'ll be %d Green Bottles, sitting on the wall.\n",i-1);
		}
	} else {
	printf("1 Green Bottle, sitting on the wall\n");
	printf("1 Green Bottle, sitting on the wall\n");
	printf("and if 1 Green Bottle should accidentally fall...\n");
	printf("...there\'ll be no Green Bottles, sitting on the wall.\n");
	}
}}
return 0;
}
