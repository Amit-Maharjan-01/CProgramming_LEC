#include<stdio.h>
#include <string.h>

void length()
{
  char name[] = "Amit";
  int length = strlen(name);
  printf("The length of the name is : %d",length);
}

void inp()
{
    char name[100];
    printf("Enter the name: ");
    gets(name);
    puts(name);
}
void main()
{
   // length();
    inp();
}
//strcat strlwr strlen strupr