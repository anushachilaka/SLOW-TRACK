#include <stdio.h>
#include <math.h>
 int main()
{
    float a, b, area;

    printf("Enter the values of a and b \n");
    scanf("%f%f", &a, &b);
    area=(a*b)/2;
    printf("Area of a triangle = %f \n", area);
}

The function to find the area of the triangle is

float area_of_triangle(float a, float b)
{
  float area;
  area=(a*b)/2;
  return area;
}
