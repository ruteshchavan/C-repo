// WAP to convert integer value into decimal , octal , hexadecimal... 
// we can simply use foramt specifer of each number conversion and print respective values...
#include<stdio.h>

int main()
	{
		int x ;
		printf("Enter the input Number : ");
		scanf("%d",&x);

	printf("Decimal value is: %d\n",x);
    printf("\nOctal value is: %o\n",x);
    printf("\nHexadecimal value is : %x\n",x);

    return 0;

	}