#include<stdio.h>

void main ()
{
    int array[5], sum = 0,i, count = 0;
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter the numbers in array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(i = 0; i < 5; i++ )
    {
        if(array[i]%7 ==0 &&array[i]%5 != 0)
        {
            sum = sum + array[i];
            count++;
            printf("%d is the required array element\n", array[i]);

        }
    }
    printf(" Sum = %d", sum);
    printf("\nTotal number of required numbers is %d", count);
}