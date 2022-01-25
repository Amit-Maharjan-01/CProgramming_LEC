#include <stdio.h>

void main (){
    int a = 21;
    int c ;

    c = a;
    printf("Line 1 - = operator example, Value of c = %d\n", c);

    c += a;
    printf("Line 2 - += Operator example, Value of c = %d\n", c);

    c -= a;
    printf("Line 3 - -= Operator example, Value of c = %d\n", c);

    c *= a;
    printf("Line 4 - *= Operator example, Value of c = %d\n", c);

    c /= a;
    printf("Line 5 - /= Operator example, Value of c = %d\n", c);

    c = 200;
    c %= a;
    printf("Line 6 - %= Operator example, value of c = %d\n", c);

}