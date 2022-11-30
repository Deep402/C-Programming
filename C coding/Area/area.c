// Write a program to calculate area of circle.
#include<stdio.h>
int main()
{
float radius,area;
printf("\n Enter the radius of the circle which you want to find the area of :");
scanf("%f",&radius);
area = 2*3.14*radius;
printf("\n the area of the circle is :%.2f",area);
return 0;
}