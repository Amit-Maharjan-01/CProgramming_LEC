#include<stdio.h>

void desce_arr (int n, int *arr)
{
    int i, j,temp;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void main ()
{
    int arr[50], i, number;
    printf("Enter the size for array: ");
    scanf("%d",&number);

    for(i = 0; i < number; i++ )
    {
        printf("\nThe number in index %d = ",i);
        scanf("%d",&arr[i]);
    }

    desce_arr(number, arr);
    {
        printf("\nThe numer in descending order is : ");

        for (i = 0; i < number; i++)
        {
            printf("%3d",arr[i]);
        }
    }
}