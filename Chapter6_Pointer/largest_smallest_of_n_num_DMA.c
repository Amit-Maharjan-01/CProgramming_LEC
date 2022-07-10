/*WAP to find the largest and smallest numbers in a list of N numbers using 'calloc' DMA*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
   int i, n;
   float *data;

   printf("Enter total number of elements: ");
   scanf("%d",&n);

   // allocates the memory for 'n' elements
   data=(float*) calloc(n, sizeof(float));

   // store the number entered by the User
   for(i = 0; i < n; i++)
   {
      printf("Enter element %d: ",i+1);
      scanf("%f",data+i);
   }

   // store largest number at address data
   for(i = 0; i < n; i++)
   {
      if( *data < *(data+i))
      {
        *data = *(data+i);
      }  
   }

   printf("\n\tLargest Element is %.2f",*data);

    //stores smallest number
   for(i = 0; i < n; i++)
   {
      if( *data > *(data+i))
      {
        *data = *(data+i);
      }  
   }

   printf("\n\tSmallest Element is %.2f",*data);

   free(data);
}