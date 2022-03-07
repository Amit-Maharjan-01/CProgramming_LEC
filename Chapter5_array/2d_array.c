#include<stdio.h>

void main()
{
   int i, j, temp[2][7];

    for(i = 0; i < 2; i++ )
    {
        for(j = 0; j < 7; j++)
        {
            printf("\nEnter the Temperature of [%d] [%d]:", i, j);
            scanf("%d", &temp[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 7; j++)
        {
            printf("\nThe temperature of 2 cities are %d", temp[i][j]);
        }
        printf("\n");
    }
}