#include <stdio.h>

void main()
{
    int F, C;
    printf("Enter the temperature in Centigrade : ");
    scanf("%d", &C);

    F = 32 + (C*9)/5;
    printf("The given Centigrade is equal to %d degree in Fahrenheit", F);
}
