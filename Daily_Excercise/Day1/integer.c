#include <stdio.h>

void main()
{
    int r,n,sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    do 
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    while(n!=0);
    printf("The sum is : %d\n", sum);
}