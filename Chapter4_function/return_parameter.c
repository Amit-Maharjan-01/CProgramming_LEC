#include <stdio.h>

int add (int a, int b)
{
int c;
c = a + b;
return c;
}

int main ()
{
    printf("The added value is %d:", add (4,5));
}

