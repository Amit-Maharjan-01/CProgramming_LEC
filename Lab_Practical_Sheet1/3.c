
#include<stdio.h>

void main()
{
    int age, days, leap;

    printf("Enter the age: ");
    scanf("%d",&age);

// when started from exactly leap year.
   
    leap = (age / 4) + 1;
    days = (365 * age) + leap;
    
    printf("The total days are: %d", days);
}