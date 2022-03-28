#include<stdio.h>
#include<string.h>

void main()
{
    int i;
    char name1[]= "Pokhara city";
    char name2[]= {'k','a','t','h','m','a','n','d','u','c','i','t','y'};

    for(i = 0; i < strlen(name1); i++)
    {
        printf("%c",name1[i]);
    }
}