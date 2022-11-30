// Pointer in Function Call.\

// 1>. Call by Value.
    /* we pass value of variable as argument*/

// 2>. Call by Reference.
    /* we pass address of variable as argument*/
    // the adress will not change fro int in main value as well as in the function.(imp).
#include<stdio.h>

void square(int n);
void _square(int* n);

int main() {
    
    int number = 4;
    square(number);
    printf("\nthe number is : %d\n",number);
   
    _square(&number);
    printf("\nthe number is : %d\n",number);
    
    return 0;
}
// call by value
void square(int n) {
    n = n * n;
    printf("\nthe square is : %d", n);
} 
// call by refrence
void _square(int* n) {
    *n = (*n) * (*n);
    printf("\nthe square by refrence is %d",*n);
    printf("\nand the memory address is %p",&n);
}