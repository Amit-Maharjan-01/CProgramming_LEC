#include <stdio.h>

  int factorial (int n )
  {
      if(n >= 1)
      {
          return n * factorial(n - 1);
      }
          
         else 
          {
            return 1;
          }
  }
    
void main ()
{
    int f;
    printf("enter the number : ");
    scanf("%d", &f);
    printf("The factorial of entered number %d  is : %d", f,factorial(f));
}
