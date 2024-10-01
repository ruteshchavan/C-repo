// Scope of a variable

#include <stdio.h>
int fun();
int var=10; // Global Variable
  int main()
	{
	  int var=3; // Local Variable
	  printf("%d\n",var);
	  fun();
	  return 0;
	}	
		int fun()
		{
		 printf("%d",var);
		}
		