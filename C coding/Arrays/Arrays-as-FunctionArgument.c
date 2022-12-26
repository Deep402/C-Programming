// Arrays as Function Argument

//Function Declaration
// void printNumbers(int arr[], int n) 
//              or
// void printNumbers(int *arr, int n) both of them are same and correct;

//Function Call
// printNumbers(arr,n);  or printNumbers(&arr[0],n);

#include<stdio.h>

//void printNumbers(int arr[], int n); or
void printNumbers(int *arr, int n);

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

/*void printNumbers(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}*/     //     or
void printNumbers(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}