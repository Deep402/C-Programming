// Write 2 functions - one to print "Hello" & second to print "good bye".

/*
#include<stdio.h>

void printHello(); // declaration/prototype
void printgoodbye(); // here 'void' is the return type.

int main() {
    printHello(); //function call
    printgoodbye();
    return 0;
}

// function definition
void printHello() {
    printf("Hello");
}

void printgoodbye() {
    printf("\ngood bye");
}
*/


#include<stdio.h>

void hello();
void goodbye();

int main() {
    hello();
    hello();
    hello();
    goodbye();

return 0;
}

void hello() {
    printf("Hello\n");
}

void goodbye() {
    printf("Good Bye");   
}