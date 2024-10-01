// WAP to swap value's two variable's [ Call By Reference Method ]...
// In call by reference, the address of the variable is passed into the function call as the actual parameter...
// The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed...
// Pointer Variable is used to assign the address of variable i.e Address of actual parameter is assigned to formal parameter...

#include <stdio.h>  
void swap(int *, int *); // function decleration   
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values a = %d, b = %d\n",a,b); // printing the value of a and b in main 

    swap(&a,&b); // calling funtion and passing the address of variable to function using derefernce operator (&)

    printf("After swapping values a = %d, b = %d\n",a,b); // The values of actual parameters change by changing in formal parameter's

}  

void swap (int *a, int *b)  // function definiton with arguments as integer pointer variable 
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
}  

