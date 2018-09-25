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
