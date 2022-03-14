#include <stdio.h>

void main ()
{
    int i, size, n, sum = 0, arr[1000];

    scanf("%d",&n);
   
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
}