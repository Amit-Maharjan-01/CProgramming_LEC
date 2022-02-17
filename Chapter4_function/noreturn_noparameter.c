#include <stdio.h>

void add ()
{
    int a,b,c; 
    printf("Enter the value of a and b : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The value of added number is : %d", c);
}

void main ()
{
    add();
}