#include<stdio.h>
int main()
{
    int i,n;
    i=i+1;
    
    printf("enter the number which you want the table for :");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {printf("%d*%d=%d\n",n,i,n*i);}
    return 0;
    
}
