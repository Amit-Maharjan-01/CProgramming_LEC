#include <stdio.h>

void main ()
{
    int a,b,big;
    printf("Enter two numbers : ");
    scanf("%d %d",  &a, &b);

    (a > b) ? (big = a) : (big = b);
    printf("The biggest among a and b is %d\n", big);
}