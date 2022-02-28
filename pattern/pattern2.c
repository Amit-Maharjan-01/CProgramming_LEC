#include <stdio.h>

// take input from user and display it in pyramid style in descending order.

void pattern()
{
   int row, i, j;
  printf("Enter the number of row: ");
  scanf("%d", &row);

  for(i = row; i >= 1; i--)
  {
    for(j = row; j >= i; j--)
    {
      printf("%3d",j);
    }
    printf("\n");
  }
}

// Take input and display into rectangle form

void rect()
{
  int a;
  printf("Enter the number :");
  scanf("%d", &a);

  for(int i = 1; i <= a; i++)
  {
    for(int j = 1; j <= a; j++)
    {
      printf("%3d", j);
    }
    printf("\n");
  }
}

void main()
{
    //pattern();
    rect();
}
