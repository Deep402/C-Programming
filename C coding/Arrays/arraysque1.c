// Write a function to count the number of odd number in an array;
 
#include<stdio.h>

int countNumber(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d", countNumber(arr,7));
    return 0;
}

int countNumber(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) { // odd
        count++;           
        }
    }    
return count;
}

