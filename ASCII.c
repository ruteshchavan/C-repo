// WAP to print ASCII values from 0 to 255...

#include <stdio.h>  
int main()  
{  

// we need to consider a variable and run for loop from 0 to 255...
// variable declared is going to loop from 0 to 255 and using %c for charcter and %i or %d it will output associate value(integer ascii value) for vairable...

 int k;    
 for(int k=0;k<=255;k++)  // for loop from 0-255  
 {  
     printf("\nThe ascii value of %c is %d", k,k);  
 }

return 0;  
}  