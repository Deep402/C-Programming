// swap 2 numbers, a & b.

#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    
    swap(x,y);
    printf("\nafter swapping x = %d & y = %d\n",x,y); 
    
    _swap(&x,&y);
    printf("\nafter swapping by refrence x = %d & y = %d\n",x,y); 
    return 0;


}
// call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("\nafter swapping a = %d & b = %d\n",a,b); 
}
// call by refrence
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("\nafter swapping by reference a = %d & b = %d\n",*a,*b); 
}