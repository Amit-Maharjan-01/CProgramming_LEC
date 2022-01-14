#include<stdio.h>
int main(){
    int testInteger;
    printf("The address of decleared variable is: %d\n", &testInteger);
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("number = %d", testInteger);
    return 0;
}
