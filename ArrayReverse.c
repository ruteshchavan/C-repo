// WAP to calculate number of elements present in array and reverse the array...
// using sizeof() operator to count array elements...
// sizeof() prints the size of array in bytes..
// to understand elements present in array we divide size of desired array by individual element of array...

/* 
Example - arr[] = {10 , 22 , 32} 
assume an integer size is 4 bytes
3 elements are there hence sizeof(arr) = 3 * 4 = 12 bytes
sizeof(arr[0]) - outputs size of single element of array
to calculate count of elements - sizeof(arr) / sizeof(a[0])
*/

#include<stdio.h>
int main()
{
    int i;
    int arr[]={10 , 45 , 58 , 69 , 87 , 93};

    printf("Size of array in bytes : %d\n",sizeof(arr));
    printf("Elements present in array are : %d\n", sizeof(arr)/sizeof(arr[0]));

    for(i=0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {
        printf("%d\t",arr[i]);
    }

        printf("\n");

    for(i=sizeof(arr)/sizeof(arr[0])-1; i>=0 ; i--)
    {
        printf("%d\t",arr[i]);
    }
        return 0;
}
