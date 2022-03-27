#include<stdio.h>

void main()
{
    int n,i;
    scanf("%d",&n);
    if(n == 1)
    {
       printf("The number is neither prime nor composit");
    }
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("The number is composit");
            break;
        }
    }
    if(i == n)
    {
        printf("The number is Prime");
    }

}