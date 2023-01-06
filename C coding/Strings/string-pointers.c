// String using pointers

/* char *str = "Hello World"; */
// stores string in memory & the assigned address is stored in the char pointer 'str'

/* 
char *str = "Hello World";   //can be reinitialized

char str[] = "Hello World"   //cannot be reinitialized
*/


#include<stdio.h>

int main() {

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    //char cannotChange[] = "Hello World";
    //puts(cannotChange);
    //cannotChange = "hello";       // here it will throw an error and will not allow the change.

    return 0;
}