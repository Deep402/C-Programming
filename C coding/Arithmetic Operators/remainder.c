#include <stdio.h>
int main()
{
    int a,b,red;
    printf("\n Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    red = a%b;
    printf("\n Remainder is :%d",red);
    return 0;

}