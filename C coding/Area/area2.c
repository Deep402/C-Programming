#include<stdio.h>
int main()
{
float ar,b,h;
printf("\n Enter the value for base and height : ");
scanf("%f %f",&b,&h);

ar= 0.5*b*h;

printf("\n The area of triangle is %.2f",ar);
return 0;
}