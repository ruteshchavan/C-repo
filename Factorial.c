// WAP to find factorial of number using recursive function...
// recursion is the technique of making a function call itself... 
// recursion may be applied to sorting, searching, and traversal problems...

#include <stdio.h>
int fact();
int main()
	{
	 	int n ;
	 	printf("Enter the number :");
	 	scanf("%d",&n);
	 	printf("Factorial of %d is %d" , n ,fact(n));
	}

int fact(int n)
{
	if(n==0)
	return 0;
	else
	return n * fact(n-1);
}
