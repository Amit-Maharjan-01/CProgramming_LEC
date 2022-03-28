#include<stdio.h>
#include<string.h>

void main()
{
    char name[100];
    char temp[100];
    printf("\nEnter the name: ");
    gets(name);

    strcpy(temp, name);

    strrev(name);

    printf("\n%s\n", name);
    printf("\n%s\n",temp);

    strcmp(name, temp);
    if(strcmp(name, temp) == 0)
    {
        printf("\nThe string is palindrome\n");
    }
    else
    {
        printf("\nThe string is not palindrome\n");
    }
}