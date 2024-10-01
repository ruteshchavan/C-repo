// Logical operator's  in c.
//short circuit concept in c.

#include<stdio.h>
int main()
	{

int a=5 , b=3 ;
int incr;

// short circuit in && :
// any condition in expression of logical AND is false then rest conditions will not be evaluated. 	
// True=1 , False=0

incr= (a<b)&&(b++); // 0 && 1 = 0
printf("Logical AND\n");  
printf("%d\n",incr); // 0
printf("%d\n",b); // 3

// short circuit in || :
// any condition in expression of logical OR is True then rest conditions will not be evaluated. 	
printf("\n");
incr=(a<b) || (b++); // 0 || 1 = 1
printf("Logical OR\n"); 
printf("%d\n",incr); // 1
printf("%d\n",b); // 4

return 0;
	}
