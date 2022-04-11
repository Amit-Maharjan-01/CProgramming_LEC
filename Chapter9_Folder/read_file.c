#include<stdio.h>

void main()
{
    char str1[10];
    FILE *file;
    
    file = fopen("Writing.txt","r");
    fscanf(file, "%s", str1);
    printf("%s",str1);
}