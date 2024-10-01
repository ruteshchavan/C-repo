// C Program to check triangle is a equilateral, isosceles or scalene...  
// A triangle is equilateral triangle, If it’s all sides are equal...
// A triangle is isosceles triangle, If any two sides of a triangle are equal...
// A triangle is scalene triangle, If none of the sides are equal...

#include<stdio.h>

int main()
{
  int x,y,z;
  printf("Enter the sides of a triangle(x,y,z):: \n");
  scanf("%d %d %d",&x,&y,&z);

  if((x==y) && (y==z) && (x==z))
  {
  printf("\nThe triangle is equilateral.");
  }

  else if((x==z) || (y==z) || (x==y))
  {
  printf("\nThe triangle is isoseles.");
  }

  else
  {
  printf("\nThe triangle is scalene.");
  }
return 0;
}