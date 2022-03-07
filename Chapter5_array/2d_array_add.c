#include<stdio.h>

//WAP to take input of row and column from user and display the sum of two matrics.

void addition()
{
    int i,j,row,column, mat_1[row][column], mat_2[row][column],add[row][column];

    printf("\nEnter order of matrix you want to define: ");
    scanf("[%d][%d]", mat_1[row][column]);

    printf("\nEnter the numbers for the 1st matrix: \n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("\nEnter the number in %d row and %d column: ", i, j);
            scanf("%d", &mat_1[i][j]);
        }
    }

    printf("\nEnter the numbers for 2nd matrix: \n");
    printf("\nEnter order of matrix you want to define: ");
    scanf("[%d][%d]", mat_2[row][column]);
    for(i = 0; i< row; i++)
    {
        for(j = 0 ; j < column; j++)
        {
            printf("\nEnter the number in %d row and %d column: ", i,j);
            scanf("%d", &mat_2[i][j]);
        }
    }

    printf("\nThe sum of 1st and 2nd matrics are: \n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%3d",mat_1[i][j] + mat_2[i][j]);
        }
        printf("\n");
    }
}

//WAP to print the sum of 2 matrics.
void simp_add()
{
    int i,j,mat_1[3][3], mat_2[3][3];
    printf("\nEnter number for 1st matrix: \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter the number in %d row, %d column: ", i,j);
            scanf("%d", &mat_1[i][j]);
        }
    }

    printf("\nEnter numbers for 2nd matrix: \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter the number in %d row, %d column: ", i,j);
            scanf("%d", &mat_2[i][j]);
        }
    }

    printf("\nThe sum of 1st and second matrics are: \n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
         printf("%3d", mat_1[i][j]+mat_2[i][j]);
        }
        printf("\n");
    }

}

void main()
{
    //addition();
    simp_add();
}