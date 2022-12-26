
// QUE 2.1
// int arr[] = {1, 2, 3, 4, 5}
// For the given array, what will the following give?


// *(arr+2); ----> ANS 3
// *(arr+5); ----> ANS 'error' because the above array only have 4 index



// QUE 2.2
// write a function to reverse an array.

#include<stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr,5);
    printArr(arr, 5);
    return 0;
}

void printArr(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
// it is a example of call by refrence;
void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}


