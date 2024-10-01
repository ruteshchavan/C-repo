// WAP to perform mathematical operations through functions defined in <math.h> header file...
// The <math.h> header file contains various methods for performing mathematical operations such as sqrt(), pow(), ceil(), floor()...
// if we want to return the absolute value of a given number, we need to implement the stdlib.h header file....

// include <math.h> functions :
// ceil(number) = returns the greatest integer value that is greater than or equal to number... 
// floor(number) = returns the smallest integer value that is smaller than or equal to number...
// sqrt(number) = returns the square root of given number...
// pow(base,exponent) = returns the power of given number...
// abs(number) = the non-negative value of number without its sign...

#include <stdio.h>  
#include <math.h> 
#include <stdlib.h>

int main() 
    {    
        int x,y;

        printf("\n%f",ceil(3.6));    
        printf("\n%f",ceil(3.3));    

        printf("\n%f",floor(3.6));    
        printf("\n%f",floor(3.2));  

        printf("\n%f",sqrt(16));    
        printf("\n%f",sqrt(7));    

        printf("\n%f",pow(2,4));    
        printf("\n%f",pow(3,3)); 

        x = -546;
        y = abs(x);   
        printf("\n%d",y);     

 return 0;   
    }