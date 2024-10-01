// program for array.
// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// To access an array element, refer to its index number.
// if number of elememts are lesser than length specified then remaining locations are filled with value 0...

#include<stdio.h>
int main ()
{
    int i = 0;
    int marks[]={10 , 22 , 36 , 55 , 75}; // decleration and initialization of array
    for(i=0 ; i < 5 ; i++) {
        printf("%d\n",marks[i]);
    }
    return 0;
}