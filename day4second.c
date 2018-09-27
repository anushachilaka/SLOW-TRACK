#include<stdio.h>
#include<math.h>

float area_of_triangle(float a ,float b)
{
  float area;
  area=(a*b)/2
   return area;
}

  int main()
 {
   float base, height, area;
   printf("Enter the values of base and height\n");
   scanf("%f%f",&base,&height);
   area=area_of_triangle(base,height);
   printf("The area of triangle is=%f",area);
  }
