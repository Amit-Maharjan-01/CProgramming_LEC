#include <stdio.h>

int multiplication (int row, int column){
    int i, j;
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= column; j++)
        {
            printf("%3d",i * j );
        }
        printf("\n");
    }
}

void triangulartable ()
{
        int number = 1 , tri_number,i,j;
    printf("Enter the number upto where you wanna print : ");
    scanf("%d", &tri_number);

    for(i = 1; number <= tri_number; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%3d", number);
            number ++;
        }
        printf("\n");
        
    }
}

void pyramid_pattern ()
{
    int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("* ");
      }
      printf("\n");
   }
}

void main()
{
//multiplication (4,4);
//triangulartable ();
pyramid_pattern (6);
}