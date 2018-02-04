#include <stdio.h> //This line wasn't present, needed to be present

int k = 4; // 
//printf("first k, %d\n", k);
int main(void){
	int i = 50;
	//printf("first i %d\n", i);
	
	unsigned int j = i * 2;
	//printf("first unsigned j %d\n", j);
	
	double k = 1.0; // there wasnt a semicolon here, I added it
	//printf("first k %f\n", k);
	printf("before \n i = %d, j = %f, k = %d \n",i,j,k);
	
	{
		float i = 5.0;
		//printf("second float i %f\n", i);
		//printf("This value of i is %3f\n",i);
		
		k = i * j;
		//printf("second float k %f\n", k);
		i *= 6;
		//printf("second i*=6 %f\n", i);
		printf("inner \n i = %f, k = %f\n",i,k);
	}	
	
	//double j; //This is another error
	printf("%f %d \n",i,k);	
	i = k * i; 
	//printf("first i again %d\n", i);
	//printf("Now, the value of i is %d\n",i); 
	printf("after \n i = %d, j = %.2f, k = %.2f\n",i,j,k);
	printf("\n\n\n");
	return 0;
}
