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

the progarm to find the area of the triangle using the function when base and height are given :

float area_of_triangle(float a ,float b)
{
  float area;
  area=(a*b)/2
   return area;
 
#include<stdio.h>
#include<math.h>
  int main()
 {
   float base, height, area;
   printf("Enter the values of base and height\n");
   scanf("%f%f",&base,&height);
   area=area_of_triangle(base,height);
   printf("The area of triangle is=%f",area);
  }

 program to print the structure of triangle
  
#include<stdio.h>
int main()
 {
  int i,j,row;
  printf("Enter the number of rows\n");
  scanf("%d",&row);
  for(i=1;i<=row;++i)
  {
   for(j=1;j<=i;++j)
   {
    printf("*");
   }
   printf("\n");
  }
  return 0;
 }
  
  
  
  
  
  
  
  
