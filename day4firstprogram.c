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

 structure to represent the triangle:
  struct triangle
  {
   float height;
   float base;
  };
 
 function to find the area of the triangle which takes struct triangle as a parameter and returns area
  #include<stdio.h>
struct triangle
{
    float height;
    float base;
    float area;
};
struct triangle input()
{
    struct triangle k;
    printf("enter the values of base and height\n");
    scanf("%f%f",&k.height,&k.base);
    return k;
}

struct triangle compute_area(struct triangle k)
{
    //struct triangle k;
    k.area=(k.height*k.base)/2;
    return k;
}

void output(struct triangle k)
{
    printf("the area of the triangle is=%f\n",k.area);
}
int main()
{
    struct triangle k;
    k=input();
    k=compute_area(k);
    output(k);
}

  

  
  
  
  
  
  
  
  
