#include<stdio.h>
//when working with file you need to declare the pointer of type file.
//This declaration is needed for communication between the file and a program.
// syntax:
// ptr = fopen("file name","mode")

void main ()
{
    FILE *file;

    file = fopen("C_Programming.txt","w");
}