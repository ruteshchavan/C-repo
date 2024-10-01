// using an array of structure...
// As we are familarize with structure we stored data of n students in the structure...
// However, the complexity of the program will be increased if there are 20 or more students...
// In that case, we will have to declare 20 different structure variables and store them one by one...
// This will always be tough since we will have to declare a variable every time we add a student... 
// Remembering the name of all the variables is also a very tricky task...


#include<stdio.h>  
#include <string.h>   

struct student
	{    
		int rollno;    
		char name[10];    
	};   

int main()
		{       
int i;    
struct student st[5];    // structure variable is declared
printf("Enter Records of 5 students");    

for(i=0;i<5;i++)
	{    
printf("\nEnter Rollno:");    
scanf("%d",&st[i].rollno);    
printf("\nEnter Name:");    
scanf("%s",&st[i].name);    
	}    

printf("\nStudent Information List:");    
for(i=0;i<5;i++){    
printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);    

}    
   return 0;    
	}    