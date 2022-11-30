//When a function call itself, it's called recusrion.
// also remember recursion can do all work which is done by loop function and 
// vice-versa.
//eg:-
// Print "Hello World" 5 times ?

#include<stdio.h>

void printHW(int count);
int main() {
    
    printHW(5);
    return 0;
}

//recursive function
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}
