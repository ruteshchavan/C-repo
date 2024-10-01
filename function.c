
#include<stdio.h> 

int sum(int, int);  // function decleration
void printName();  // function decleration

void main ()  
{  
 
 // function printName :
    printf("Hello "); 
    printName(); // function  call of printName 
    printf("\nHello ");   
    printName(); // function call of printName 

// function sum :
    int a,b,result;   
    printf("\n\nGoing to calculate the sum of two numbers:");  
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  // function call of sum
    printf("The sum is : %d",result);
}  

// function printName definition without arguments and without return value...

void printName()  
{  
    printf("DYPCET");  
} 

// function sum definition with arguments and with return value...

int sum(int a , int b) 
{
    return a + b ;
}