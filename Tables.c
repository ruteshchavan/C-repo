// WAP to print table's...

#include <stdio.h>  
int main()   
{  
  int num , i=1 ;   
  printf("Enter the Table Number :");   
  scanf("%d",&num); 

  for(i=1;i<=10;i++)
  {  
  printf("%d x %d = %d\n",num,i,num*i);  
  }

  return 0 ;
}