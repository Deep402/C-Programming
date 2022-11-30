#include<stdio.h>
int main ()
{
    int c;
    printf("enter the number to check for odd or even : ");
    scanf("%d",&c);

    if( c % 2 == 0)
    {printf("the numebr is even");}
    else 
    {printf (" the no. is odd");
    }
    return 0;

}