// C program to convert Total days to year, month and days...

#include <stdio.h>

int main()
{
    int d,y,m,nd;
    printf("Enter number of days :: ");
    scanf("%d",&d);
    
    y=d/365;
    d=d%365;

// when mod 400 days % 365 = 35 days which on dividing 35/30 = 1 month... 
// we need to store remainder of days in order to obtain months...
// eg: 200 days % 365 = 200 days which on mod by 30 gives 6 months...
// hence to obtain days we need to store remainder i.e 200 days % 30 = 20 days...

    m=d/30;
    nd=d%30;
    printf("\n%d years, %d months, %d days\n",y,m,nd);
    return 0;
}