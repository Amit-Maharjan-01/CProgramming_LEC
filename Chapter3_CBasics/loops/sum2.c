#include <stdio.h>

void main ()
{
    int a, sum = 0;

    printf("The natural numbers are : \n");

    for(a = 1; a <=10; a = a + 1)
    {
        printf("%d ", a);
       
    }
    for(a = 1; a <=10; a = a + 1) 
    {
     sum = sum + a;
     printf("\nThe sum of natural numbers are : %d", sum);   
    }
}