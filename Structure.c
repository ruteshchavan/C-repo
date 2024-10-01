// understanding the structure...
// Structure in c is a user-defined data type that enables users to store the collecton of different data types.
// Each element of a structure is called a member.
// struct keyword is used to define the structure.

/* There are two ways to access structure members:
	By -> (structure pointer operator)
	By . (member or dot operator)
*/

#include <stdio.h>  
#include <string.h>  

struct employee      // declare structure 
{  
 	  int id;      		/* id , name , salary are the member's of structure  */
    char name[50];              
    float salary;

} e1,e2;  //declaring e1 and e2 variables for structure to further access the structure member's 

int main( )    
{    

//storing first and second employee information    

	e1.id = 001;
	strcpy(e1.name,"Jane Poll");  // copying the string into char array
	e1.salary = 46000;

	e2.id = 002;
	strcpy(e2.name, "Tim Dale");
	e2.salary = 49000;
      
 // printing first and second employee information  

   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
   printf( "employee 1 salary : %f\n", e1.salary);   

   printf("\n"); 
    
   printf( "employee 2 id : %d\n", e2.id);    
   printf( "employee 2 name : %s\n", e2.name);    
   printf( "employee 2 salary : %f\n", e2.salary);    

   return 0;    
} 








