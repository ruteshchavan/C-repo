// There are two methods to pass the data into the function in C language, i.e., call by value and call by reference...
// WAP to swap value's two variable's [ Call By Value Method ]...
// In call by value method, we can not modify the value of the actual parameter by the formal parameter...
// In call by value, different memory is allocated for actual and formal parameters..

#include <stdio.h>  

void swap(int , int); // function decleartion...   

int main()  
{  
    int a = 10;  
    int b = 20;   

    printf("Before swapping the values a = %d, b = %d\n",a,b); // printing the value of a and b...   

    swap(a,b);  
    
    printf("After swapping values a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters...

    }  

void swap (int a, int b )  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
}  

