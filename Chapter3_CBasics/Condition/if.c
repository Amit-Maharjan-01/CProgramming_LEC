#include <stdio.h>

void main()
{
    int cmarks;
    printf("Enter marks you have obtained on C programming exam\n: ");
    scanf("%d", &cmarks);

    if ( cmarks >= 40 ) {
        printf("congrats, you have passed the exam");
        if(cmarks >=85 ) {
            printf(" your grade is A+");
        } 
        else if(cmarks >= 70 && cmarks < 85) {
            printf (" your grade is A");
        } 
        else if (cmarks >= 60 && cmarks < 70) {
            printf(" your grade is B");
        }
        else if (cmarks >=50 && cmarks < 60) {
            printf(" your grade is C");
        }
        else {
            printf(" your grade is D");
        }
    } 
    else {
        printf(" Try Harder next time");
    }
}