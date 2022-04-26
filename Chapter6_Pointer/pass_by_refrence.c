#include<stdio.h>

void swap (int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp; 
}

void main()
{
    int a,b;
    printf("Enter the Number :");
    scanf("%d %d", &a,&b);
    swap(&a, &b);
    printf("%d %d", a,b);

}