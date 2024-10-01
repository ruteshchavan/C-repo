// C Program to calculate simple interest  
// conio.h console input output header file... 
// The conio.h is a header file that contains utility functions to perform input and output operations to the console from the C program... 
// This header file is mostly used by MS-DOS compilers like Turbo C to create text user interfaces...
// There is no manadatory to include conio.h simply we can igonre/comment... 

#include<stdio.h>
#include<conio.h>

int main()
{
  float Loan,rate,time;
  float SimpleInterest;
  printf("Enter the Loan amount : ");
  scanf("%f",&Loan);
  printf("\nEnter the rate of interest : ");
  scanf("%f",&rate);
  printf("\nEnter the time duration in months: ");
  scanf("%f",&time);

  SimpleInterest=(Loan*rate*time)/100;
  printf("\nThe simple interest is %f \n",SimpleInterest);

  return 0;
}