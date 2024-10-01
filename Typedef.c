// use of typedef...
// The typedef is a keyword used in C programming to provide some meaningful names to the already existing variable...

/* example : 
		typedef int unit;   - we have declared the unit variable of type int by using a typedef keyword

		instead of writing: int a, b;  

		we can create the variables of type unsigned int by 
		writing the following statement : unit a, b;   
*/
		

#include <stdio.h>  
int main()  
{  
typedef unsigned int unit;  // unsigned can store only positive values...
unit i,j;  // using typdef unit variable is used to create variable...  
i=10;  
j=20;  
printf("Value of i is :%d",i);  
printf("\nValue of j is :%d",j);  
return 0;  
}  