// C program to find Sum and Average of two numbers  

#include <stdio.h>

int main()
{
    int a,b,sum;
    float avg;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("\nEnter second number :");
    scanf("%d",&b);

    sum=a+b;

// To convert the value of one data type to another type ( Integer to Float) type conversion is done...
// Explicit conversion is done manually by placing the type in parentheses () in front of the value...
// Syntax : variable = (datatype_conversion) data_values ;

    avg= (float)(a+b)/2;

    printf("\nSum of %d and %d is = %d\n",a,b,sum);
    printf("\nAverage of %d and %d is = %f\n",a,b,avg);

    return 0;
}