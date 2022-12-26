// Multidimensional Arrays

// 2D Arrays
//int arr[][] = {{1,2},{3,4}}; ----> Declare

//Access 
/*  arr[0][0]
    arr[0][1]
    arr[1][0]
    arr[1][1]   */

// 2D Array
#include<stdio.h>

int main() {
    // 2x3;
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 98;
    marks[1][1] = 88;
    marks[1][2] = 64;

    printf("%d", marks[0][0]);
}