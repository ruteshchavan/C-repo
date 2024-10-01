// WAP demonstrating range for integers(short & long) using Symbolic Constants.....

#include <stdio.h>
#include <limits.h>

// "#include <limits.h>" is a header file which has symbolic constants which are used to determine the min and max range for integers...

	int main()
	{

// range for short signed integer.....
// by deafult integer are always signed writng signed int or int is same.....
// Short and Long are Modifier's
		short int var_1= SHRT_MIN;
		short int var_2= SHRT_MAX;
		
// range for min unsiqned integer is always default 0.....
		short unsigned int var_3= 0;
		short unsigned int var_4= USHRT_MAX;

// for long integer.....
		long int var_5= INT_MIN;
		long int var_6= INT_MAX;

//for unsigned long integer......
		long unsigned int var_7= 0;
		long unsigned int var_8= UINT_MAX;
    
    printf("Range for signed short int is from: %d to %d\n" ,var_1,var_2); 
    printf("Range for unsigned short int is from: %u to %u\n" ,var_3,var_4); 
    printf("Range for long signed int is from: %ld to %ld\n" ,var_5,var_6);
    printf("Range for long unsigned int is from: %lu to %lu\n" ,var_7,var_8); 

		return 0;

	}