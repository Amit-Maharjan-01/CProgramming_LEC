//WAP to count the number of odd and even numbers entered by user. 
 //your program must read unitl user enter zero.After 0 display count

 #include<stdio.h>

void main()
{
    int n = 1, count = 0, count_odd = 0, count_even = 0;


    while (n != 0)
    {
        printf("\nEnter the number : ");
        scanf("%d", &n);

        if(n % 2 == 0)
        {
            printf("\nThe given number %d is even", n);
            count_even++;
        }
        else 
        {
            printf("\nThe given number %d is odd", n);
            count_odd++;
        }
        count++;  
    }
    printf("\nThe number of odds are : %d and the number of evens are : %d", count_odd, count_even);
    printf("\nThe number of odd and even number inputed is %d", count);
}    