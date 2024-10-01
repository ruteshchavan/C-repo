// WAP to pass command line argument...
// The arguments passed from command line are called command line arguments...

#include <stdio.h>  

// we need to follow the structure of main function for command line argument...
// argc counts the number of arguments...
// argv[] contains the total number of arguments...

void main(int argc, char *argv[] )  {  

// But if you pass many arguments within double quote, all arguments will be treated as a single argument only...

   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 1){  
      printf("No argument passed through command line.\n");  
   }  
   else{  
      printf("First argument is: %s\n", argv[1]);  
   }  
}  
