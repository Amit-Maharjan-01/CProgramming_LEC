
#include<stdio.h>

void main()
{
    float surface_area, volume, radius, p = 3.1415;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = (4/3)*p*radius;
    surface_area = 4 * p * radius;

    printf(" The volume of a sphere is: %f\n The surface area is: %f", volume, surface_area);
}