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

//wap to print any given number into V shape with one side ascending and one side descending order.

void Vshape()
{
  int n, i, j, k, p = 0;
  printf("Enter the top number : ");
  scanf("%d", &n);

  for(i = n; i >= 1; i--)
  {
    for(k = 1; k < 1; k++)
    {
      printf(" ");
    }
    for(j = i; j <= n+p; j++)
    {
      if(j==i||j==n+p)
      printf("%d",j);

      else
      {
        printf(" ");
      }
      
    }
    p++;
    printf("\n");
  }
}

// WAP to print 1 2 3 4 5
//                2 3 4 5
//                  3 4 5
//                    4 5
//                      5

void inv_tri()
{
   int n, k;
  printf("Enter the number you want to make triangle of : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
  {
    for(int k = 0; k <= i-1; k++)
    {
      printf("\t");
    }
    for(int j = i; j <= n; j++)
    {
      printf("%d\t",j);
    }
    printf("\n");
  }
}


void main()
{
    //pattern();
   // rect();
   //Vshape();
   inv_tri();
}
