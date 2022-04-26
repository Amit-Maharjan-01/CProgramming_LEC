#include<stdio.h>

void main()
{
    int *pointer_var;
    int number = 100;

    pointer_var = &number;
    printf("%p\n", pointer_var);
    printf("%d", *pointer_var);
}


