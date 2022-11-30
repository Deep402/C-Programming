//Print the sum of he first n Natural numbers.(n=4)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int sum = 0; // in sum que always take inital value as 0.
    for (int i=1; i<=n; i++){
        sum = sum + i; // or can write sum += 1
    }
 printf("sum is %d\n",sum);
 return 0;
}


//2nd way of doing it.



