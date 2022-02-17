#include <stdio.h>

int multiplication ()
{
    int a, b, c;
    printf("Enter the value of a and b : ");
    scanf("%d%d", &a, &b);
    c = a * b;
    return c;
}

int main ()
{
   int d = multiplication ();
    printf("The multiplication value of given number is : %d", d );
}