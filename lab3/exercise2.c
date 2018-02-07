#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	// get user input
	char buffer[101];
	printf("Enter a string of up to 100 characters\n");
	fgets(buffer, sizeof(buffer), stdin);
	
	printf("The length of the string you entered: %d\n", strlen(buffer)-1);	// get the characters typed excluding newline
	char lowercase[sizeof(buffer)];		// array to store lowercase char counterparts
	int i; // iterator
	for(i=0;i<strlen(buffer);i++){
		// if the char is uppercase, lower case it and add it to lowercase[]
		if(isupper(buffer[i])){
			lowercase[i] = tolower(buffer[i]); // lower case the char
		} else {
			lowercase[i] = buffer[i]; // otherwise it's already lowercase
		}
	}
	// if the lowercase string is equal to the original, the original is lowercase
	// This function returns false if true (why) so negate the output in conditional
	// If your string was already in all lowercase, complain to user for wasting CPU resources on trivial things
	if(!strcmp(buffer, lowercase)){
		printf("\nYour string was already in lowercase!\n");
	} else {
		printf("\n%s\n",lowercase); // print the user's input, in all lowercase
	}
return 0;
}
