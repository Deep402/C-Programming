// Array is a pointer

// int *ptr = &arr[0] ot int *ptr = arr;
// are both the same things

// Traverse on Array / Travel on Arrays;

#include<stdio.h>

int main() {
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++) {
        printf("%d index : ", i );
        scanf("%d", (ptr+i));
        scanf("%d", &aadhar[i]);
    }
    //output
    for(int i=0; i<5; i++) {
        printf("%d index = %d\n", i, *(ptr+i));
        printf("%d index = %d\n", i, aadhar[i]);
    }
    return 0;

}