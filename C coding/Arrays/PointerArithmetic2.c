/*
We can also subtract one pointer from another
 int ptr1 = &age;
 int ptr2 = &age2;

 ptr1-ptr2;
*/

// We can also compare 2 pointers

#include<stdio.h>

int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %p\n", ptr - _ptr);
_ptr = &age;
    printf("difference = %p\n", ptr == _ptr);
    return 0;
}