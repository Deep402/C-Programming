#include<stdio.h>
int main() {
    int n;
    do {
        printf("enter number : ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 11 == 0){ // multiple of 11
        break;
        }
    
    } while(1);
    printf("Thank you");
    return 0;
}