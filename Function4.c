//Example for Function with argument and with return value

#include<stdio.h>  
int sum(int, int);
  
void main()  
{  
    int a,b,result;   
    printf("\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  
    printf("\nThe sum is : %d",result);  
}  
int sum(int a, int b)  
{  
    return a+b;  
}  