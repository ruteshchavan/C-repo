// switch case...
// switch is a great replacement fo long else if construct...
// only those expression are allowed in switch which results in a integral constant value...

#include<stdio.h>	
	int main()
{
	int x = 3;
	switch(x)
	{
	case 1: printf("x is 1");
		break;
	case 2: printf("x is 5");
		break;

// default can be placed anywhere in switch...
	default: printf("Null Value");
		break;

	case 3: printf("x is 8");
		break; 	
	}
		return 0;
}


	