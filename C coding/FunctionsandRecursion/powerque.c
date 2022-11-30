#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,power;
    
    printf("\n Enter the first no as base = a: ");
    scanf("%d",&a);
    printf("\n Enter the power no = b : ");
    scanf("%d",&b);

 power = pow(a,b);
    printf("\n the value of a^b = %d",power);
    return 0;

}

