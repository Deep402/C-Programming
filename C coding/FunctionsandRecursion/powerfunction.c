// Use library functions to calculate the square of a number given by user.

#include<stdio.h>

void printsquare(float a);

int main() {
    float a;
    printf("Enter the no. : \n");
    scanf("%f",&a);
    printsquare(a);

    return 0;
}

void printsquare(float a) {
    a = a*a;
    printf("%.0f",a);
}
