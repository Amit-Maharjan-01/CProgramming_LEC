
#include<stdio.h>

void main()
{
    float length, breadth, area, perimeter;

    printf("Enter the Length and Breadth of the room respectively: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = (length + breadth)*2;

    printf(" The area of the room is: %f\n The perimeter of the room is: %f", area, perimeter);
}