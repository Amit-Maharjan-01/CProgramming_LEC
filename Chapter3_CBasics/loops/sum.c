// print the sum of first 10 natural numbers

#include <stdio.h>

void main ()
{
     int  a, sum = 0;

    printf("The 10 natural number is :\n");
 
    for (a = 1; a <= 10; a = a + 1)
    {
        sum = sum + a;
        printf("%d ", a);    
    }
    printf("The Sum is : %d\n", sum);

}