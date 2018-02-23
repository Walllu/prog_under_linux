#include <stdio.h>

int main(void) {
	// myPtrPtr is a pointer to the myPtr pointer. It hold the address of the pointer myPtr
	int i, *myPtr, **myPtrPtr;
	int a[2] = {1,2};
	
	i = 6;
	myPtr = &i;
	myPtrPtr = &myPtr;
	{
		int i = 7; // this is a local block scope variable "int i"
		*myPtr = 45; // this is a local block scope variable "int *myPtr"
		printf("The value %d is stored in location %p\n",*myPtr,&myPtr);
		printf("The value %d is stored in location %p\n",i,&i);
		//these innr printf statements print the values defined within this block of code
	}
	
	// if one wanted, they could print **myPtrPtr to get value of i
	printf("The value %d is stored in the location %p\n",**myPtrPtr,myPtr);
	printf("The value %d is stored in location %p\n",i,&i);
	
	printf("\n%d",a); // a is the address of the array i.e. the first element
	printf("\n%d",&a); // the address of the array
	printf("\n%d",*a); // the value of the array i.e. the first element
	printf("\n%d",a[0]); // first element of the array
	printf("\n%d\n",a[1]); // the second element of the array
		
	return 0;
}
