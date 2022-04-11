#include<stdio.h>

void main()
{
    FILE *file;

    file = fopen("Writing.txt", "w");
    fprintf(file, "amit");
}   