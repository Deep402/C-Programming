// Print the sum of the digits of the five digit number.
#include<stdio.h>
int main() {
    int n,r,sum;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",sum);
    }