#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr, n, i, sum = 0;

    printf("\nEnter the number you want: \n");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Enter the number addition: ");
        scanf("%d", ptr + i);
        sum = sum + *(ptr + i);
    }
    printf("\nThe sum is : %d",sum);
    free(ptr);
}