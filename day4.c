#include <stdio.h>
#include <math.h>
 int main()
{
    float base, height, area;
 
    printf("Enter the values of base and height \n");
    scanf("%f %f ", &base, &height);
    area=(base*height)/2;
    printf("Area of a triangle = %f \n", area);
}
