// C Program to calculate AREA of a rectangle...
// Consider 3 variables...
// Where 2 variables points length and breadth and third variable is to calculate Area...

#include<stdio.h>

int main()
{
  int l,b;
  int area;
  printf("Enter the length of the rectangle : ");
  scanf("%d",&l);
  printf("\nEnter the breadth of the rectangle : ");
  scanf("%d",&b);
  area=l*b;
  printf("\nThe area of a rectangle is %d \n",area);
return 0;
}
