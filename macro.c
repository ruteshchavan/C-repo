// use of macros's and some predefined macros's.
// macro is a segment of code which is replaced by the value of macro.
// macro syntax - #define macro_name value.
// The #define preprocessor directive is used to define constant or micro substitution.
// The #undef preprocessor directive is used to undefine the constant or macro defined by #define.


# include<stdio.h>
# define pi 3.14   // defining macro using #define (preprocessor directive)


 int main()
 {   
   printf("%f\n",pi);

// some predined macro's...

   printf("File :%s\n", __FILE__ );   // represents current file name.
   printf("Date :%s\n", __DATE__ );   // represents current date in "MM DD YYYY" format.
   printf("Time :%s\n", __TIME__ );   // represents current time in "HH:MM:SS" format.
   printf("Line :%d\n", __LINE__ );   // represents current line number.
   
   return 0;
     
 }    