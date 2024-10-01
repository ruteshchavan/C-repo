// use of constants.
// using # define preprocessor. 
// syntax #define NAME value.
// generally NAME is replaced by value in code.

#include<stdio.h>
#define PI 3.14159

#define STRING "%s\n"
#define NESO "Welcome to C Language....."

int main()
 {
	printf("Value of PI is : %lf\n\n", PI);

	printf(STRING,NESO);
	printf("\n");

// using const keyword for variable. 	
	
	const double Pi=3.1456;
	printf("Value of Pi is :%lf");	

	return 0;
 }