#include <stdio.h>

void subtract (int a, int b)
{
    int c;
    c = a - b;
    printf("The subtracted value is : %d", c);
}

void main ()
{
    subtract (10,4);
}