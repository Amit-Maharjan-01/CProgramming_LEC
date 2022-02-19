#include <stdio.h>

int arr ()
{
    int numbers [] = {5, 10, 15, 20, 25, 30};
    
    printf("My roll no is : %d\n", numbers [2]);

    for(int i = 0; i < 6; i++)
    {
        printf("\nThe value on index no %d is : %d", i, numbers[i]);
    }
}

int num ()
{
    int numbers [50], size ;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        printf("\nEnter the number in %d index : ", i);
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("\nThe number in index %d is %d", i , numbers[i]);
    }
}

void main ()
{
    // arr();
    num();
}