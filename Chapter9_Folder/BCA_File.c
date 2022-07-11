#include <stdio.h>

void main()
{
    FILE *file;
    
    file = fopen("BCA.txt", "w");
    fprintf(file, "Welcome to BCA Program");
}