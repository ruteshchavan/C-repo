// code to enter user input...

#include<stdio.h>
	int main()
	{
	  int a,b;
		printf("Enter first Number\n");

// & is used to accept input from user.....		
		
		scanf("%d",&a);

		printf("Enter second Number\n");
		scanf("%d",&b);

		printf("\n");
		printf("Addition of Two Numbers :\n");
		printf("%d + %d = %d", a ,b , a+b);

		return 0;
	}