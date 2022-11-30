// Pointer to Pointer

// A variable that stores the memory address of another points
// Syntax

// int **prtr 
// Char **pptr
// float **pptr
// ( * --> value at address operater.
//                 & --> address of operator.)
#include<stdio.h>
/* 

int main() {
    float price = 100.00;
    float *ptr = &price; // &price --> represnts the address of price ; and *ptr will represent the value at price (100.00)
    float **pptr = &ptr;

    return 0;
}
*/
// que Print the vlaue of 'i' fromits pointers to pointers

int main() {

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d",**pptr);
    
    return 0;
}