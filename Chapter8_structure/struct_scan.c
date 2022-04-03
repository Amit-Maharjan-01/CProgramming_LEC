#include<stdio.h>
#include<string.h>


    struct student
    {
        char name[20];
        int rollno;
    }s1,s2;

void main() 
{
    puts("Enter the name: ");
    gets(s1.name);
    printf("Enter the rollno: ");
    scanf("%d",&s1.rollno);

    puts("Enter the name: ");
    scanf("%s",s2.name);
    printf("Enter the rollno: ");
    scanf("%d",&s2.rollno);

    printf("The name is : %s\n", s1.name);
    printf("The rollno is : %d\n", s1.rollno);

    printf("The name is : %s\n", s2.name);
    printf("The rollno is :%d\n", s2.rollno);
}