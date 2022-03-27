#include<stdio.h>

void odd()
{
    int v = 1,a;

    printf("Enter the you want: ");
    scanf("%d",&a);

    for(int i = 1; i <= a; i++)
    {
        printf("%3d",v);
        v = v + 2;
    }
}


void even ()
{
     int v = 0,a;

    printf("Enter the you want: ");
    scanf("%d",&a);

    for(int i = 1; i <= a; i++)
    {
        printf("%3d",v);
        v = v + 2;
    }
}
void main()
{
    //odd();
    //even();
}