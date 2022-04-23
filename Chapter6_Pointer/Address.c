#include <stdio.h>

void integer()
{
    int num = 1;

    printf("Value of num is %d", num);
    printf("\nAddress of number is %p",&num);
}

void character()
{
    char sana = 'a';

    printf("%c",sana);
    printf("\nAddress of the character is %p",&sana);
}




void main()
{
    //integer();
    character ();
}