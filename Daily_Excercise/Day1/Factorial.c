#include <stdio.h>

void main()
{
    int n,i,fac = 1;
    printf("Enter the value of number : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fac = fac * i;
    }
        printf("The factorial is : %d\n", fac);
}