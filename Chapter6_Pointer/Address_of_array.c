#include<stdio.h>

void main ()
{
    int x[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Address of &x[%d] = %p\n", i, &x[i]);
    }
}