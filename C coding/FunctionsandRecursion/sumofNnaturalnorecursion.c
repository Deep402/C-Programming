// Sum of first n natural numbers.

#include<stdio.h>

int sum(int n);

int main() {
printf("sum is : %d", sum(100));
    return 0;
}

//recursive function
int sum(int n) {
    if(n == 1) { //Base case
        return 1;
    }
    int sumNminus1 = sum(n-1); //sum fo 1 to n
    int sumN = sumNminus1 + n;
    return sumN;
}