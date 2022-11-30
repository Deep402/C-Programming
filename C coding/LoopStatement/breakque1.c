//keep taking numbers as inputs from user until user enters an odd number.
#include<stdio.h>
int main() {
    int n;
    do { 
        printf("enter number : ");
        scanf("%d",&n);

        if (n % 2 !=0) {
            break;
        }
    } while (1);
    {
        printf("thank you");
    }
    return 0;
}