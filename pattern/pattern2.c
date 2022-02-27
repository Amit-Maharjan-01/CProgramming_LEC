#include <stdio.h>

// take input from user and display it in pyramid style in descending order.

void pattern()
{
    int a;
    
    for(int i = 5; i >= 1; i-- )
    {
        for(int j = 5; j >= 1; j--)
        {
            printf("%3d", j);
        }
        printf("\n");
    }
}

void main()
{
    pattern();
}
