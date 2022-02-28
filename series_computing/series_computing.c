//WAP to display the term of the following terms of the following series and display the sum of 
//the terms. The sequence is 1  2  3  4  5  6  7  8  9  ......

#include<stdio.h>

void sum()
{
    int a, sum = 0;
    printf("Enter the number you want to display: ");
    scanf("%d",&a);
    printf("The term of the sequence are : ");

    for(int i = 1; i <= a; i++)
    {
        printf("%3d", i);
        sum = sum + i;
    }
    printf("\nThe sum of the %d terms is : %d",a, sum);
}

void main()
{
    sum();
}