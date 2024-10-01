// different functions in the string header file...
// always include string header file while working with string...


#include<stdio.h>  
#include <string.h> 

int main()
{    
  char var[20];    
  printf("\nEnter string: ");    
  gets(var);	//reads string from console used to take input from user...

  printf("String is: %s",var);   

// strlwr() returns sting of chracter's is lowercase...
  printf("\nLower String is: %s",strlwr(var));  

// strupr() returns sting of chracter's is lowercase...
   printf("\nUpper String is: %s",strupr(var)); 	

// strlen() return's the length of string...
   printf("\nLength of string is: %d",strlen(var)); 

// strrev() is used to reverse the string...  
  printf("\nReverse String is: %s",strrev(var));
 
 return 0;    
}    