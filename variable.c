// Difference Between Static and Local Variable.

/* All variables in C that are declared inside the block, are automatic variables by default.
We can explicitly declare an automatic variable using auto keyword. */

/* C laanguage is called Mother Language because it provides the core concepts like the array, strings, functions, file handling, etc.
 that are being used in many languages like C++, Java, C#, etc. */

/*If you call this function many times, the local variable will print the same value for each function call, 
e.g, 11,11,11 and so on. But the static variable will print the incremented value in each function call, e.g. 11, 12, 13 and so on. */


#include<stdio.h> 	
void function1() 
  {  
int x=10;//local variable  
static int y=10;//static variable  
	x=x+1;
	y=y+1;
   
   printf("\t");
   printf("%d",x);
   printf("\t\t\t\t");
   printf("%d",y);
   printf("\n");
  } 

	int main()
{

   printf("  Local Variable");
   printf("\t\t Static Variable");
   printf("\n");
	function1();
	function1();
	function1();
	function1();
	function1();

	return 0;
}

