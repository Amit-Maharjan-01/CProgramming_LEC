#include<stdio.h>
#include<string.h>


    struct student
    {
        char name[20];
        int rollno;
    }s1,s2;

void main() 
{
    strcpy(s1.name, "Amit Maharjan");
    s1.rollno = 1;

    strcpy(s2.name, "Sujal Maharjan");
    s2.rollno = 2;

    printf("The name is : %s\n", s1.name);
    printf("The rollno is : %d\n", s1.rollno);

    printf("The name is : %s\n", s2.name);
    printf("The rollno is :%d\n", s2.rollno);
}