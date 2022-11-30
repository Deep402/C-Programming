// Declaring Pointers
// int *ptr; --> int age = 18;
// char *ptr; --> char star ='*';
// float *ptr; --> float price = 100.00;

// Format Specifier
// printf("%p",age);
// printf("%p",ptr);
// printf("%p",&ptr);

// %p --> it will give a hexadecimal value and %u --> it will give value its is used when unsigned int.
// %p and %u have the same function

#include<stdio.h>

int main() {
    int age = 18;
    int *ptr = &age;

    //address
    //printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    return 0;
}