// write a funciton to caluclate the sum, product & average 2 numbers. Print the average in the main function.

#include<stdio.h>

void sillycal(int a, int b, int *sum, int *prod, int*avg);

int main() {
    int a=3, b=4, c=5;

    int sum, prod, avg;

    sillycal(a,b,&sum,&prod,&avg);
    printf("\nsum is %d\nproduct is %d\naverage is %d",sum,prod,avg);

    return 0;
}

void sillycal(int a, int b, int *sum, int *prod, int*avg){

    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
