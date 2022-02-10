#include <stdio.h>

void main()
{
    int p,t,r,i;

    printf("Enter the value of principle,time and rate : ");
    scanf("%d,%d,%d", &p,&t,&r);

    i = (p*t*r)/100;
    printf("The value of simple intrest is : %d\n", i);
}