// conditional operator is ternary operator...
// condtional operators required 3 operands...
// example : result = ( marks > 33) ? "pass" : "fail" ;
// pass and fail acts as true or false with respect to result (expression)...
// ternary or conditional operator can replace is-else construct...

#include<stdio.h>
	int main()
		{
			int x = 75;
			int y = 56;
			int num;

			num =sizeof(x) ? ( y > 23 ? ((x == 75) ? 'A' : 'B' ) : 0 ): 0 ;
			printf( "%d", num);
			num = x<50?x:y;
// assume the size of the integer x as 4... 
			
			printf( "%d", num);
			return 0 ;
		}
// final output is A i.e in ASCII format the associated value for A is 65 hence 65 is printed...