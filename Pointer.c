// program for pointer.
// The pointer is a variable which stores the address of another variable.
// The pointer can be declared using * (asterisk symbol).It is also known as Value of operator/indirection operator (*).
// The address of operator '&' returns the address of a variable. But, we need to use %u to display the address of a variable.
// A pointer that is not assigned any value but NULL is known as the NULL pointer.


#include <stdio.h>  
int main()  
{  
    int x=9;  // local variable is declared.
    int *ptr; // pointer variable is declared. 
    ptr=&x;  // address of 'x' is stored in pointer variable ptr.			

    printf("value of x is : %d\n", x);  
    printf("Address of x is %d\n", &x);
    printf("value of ptr is : %d\n", *ptr);
    printf("Address of ptr is %d\n", ptr);

    *ptr=8;

    // We can change the value of 'x' variable by dereferencing a pointer ptr.
    // As we know that the 'ptr' contains the address of 'x' variable, so '*ptr' is the same as 'x'.
    
    printf("value of x is : %d\n", x); 
    printf("value of ptr is : %d\n", *ptr);

    return 0;
}  