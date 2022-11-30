// Function Prototype/Decalration
// Syntax 1
// void printhello();

// Syntax 2
// Function Definition
// void printHello() {
//    printf("hello World\n");
// }

// Syntax 3
// Function Call
// int main() {
//    printHello();   
//    return 0;
// }

#include<stdio.h>
//declaration/prototype
void printHello();

int main() {
    printHello(); //Function call
    printHello();
    printHello();
    printHello();
    return 0;
}

//function definition
void printHello() {
    printf("hello\n");
    printf("great work\n");
}