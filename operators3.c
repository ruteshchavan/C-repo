// Bitwise operator's  in c.
// In Bitwise operation the values are treated in binary format.

#include<stdio.h>
int main()
	{

int a=7 ; // 0 1 1 1 
int b=4 ; // 0 1 0 0
int c=1 ; // 0 0 0 1
int Bit;

printf("Bitwise AND (&)\n");  
Bit=a&b; 
printf("%d\n",Bit); // 

printf("\n");

printf("Bitwise OR (|)\n");  
Bit=a|b; 
printf("%d\n",Bit);  

printf("\n");

printf("Bitwise NOT (~)\n");  
c=~(c);
printf("%d\n",c);  

printf("\n");

printf("Left Shift (<<)\n");  
a=a<<1;
printf("%d\n",a);

printf("\n");

printf("Right Shift (>>)\n");  
b=b>>1;
printf("%d\n",b);
  
return 0;
	}
