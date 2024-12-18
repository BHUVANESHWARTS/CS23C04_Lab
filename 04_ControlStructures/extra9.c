//Consider the pairs of characters used in C programs: ( ), { }, [ ], and < >. Accept one of 
these characters and print the name of the corresponding pair of characters a s 
parenthesis, curly braces, square brackets, and angle brackets.
#include <stdio.h>
int main(){
	char c;
	printf("Enter any of the brackets(single character) used in c: ");
	scanf("%c", &c);
	switch(c){
		case '(':
			printf("Paranthesis\n");
			break;
		case '{':
			printf("Curly Braces\n");
			break;
		case '[':
			printf("Square Brackets\n");
			break;
		case '<':
			printf("Angle Brackets\n");
			break;
		default:
			printf("Invalid input!");
	}
	return 0;
}
