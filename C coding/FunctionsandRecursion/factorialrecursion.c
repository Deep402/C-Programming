// find the factorial of n.
#include<stdio.h>

int fact(int n);

int main() {
    printf("factorial is : %d",fact(6));
    return 0;
}

int fact(int n) {
    if(n ==0) {
        return 1;
    }
    int factNminus1 = fact(n-1);
    int factN = factNminus1 * n;
    return factN;

}

