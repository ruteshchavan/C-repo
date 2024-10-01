// operator's in C

#include<stdio.h>
	int main()
	{
	int a=7;
	int b=4;
	int c;

printf("Assignment Operators :\n");
	c=a+b;
	printf("Addition 7+4 :%d\n",c);

	c=a-b;
	printf("Subtraction 7-4 :%d\n",c);

	c=a*b;
	printf("Multiplication 7*4 :%d\n",c);

	c=a/b;
	printf("Divion 7/4 :%d\n",c);

	c=a%b;
	printf("Modulus 7%%4 :%d\n",c);
	printf("\n");

		printf("-------------------------------------------------------------------------------\n");
		printf("\n");
printf("Increment & Decrement Operators :\n");
	printf("Increment : %d\n",++a);
	printf("Decrement : %d\n",++b);
	printf("\n");

		printf("-------------------------------------------------------------------------------\n");

		return 0;
	}