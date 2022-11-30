// will the address output be same?

/*
void printAddress(int n);

int main() {
    int n = 4;

    printf("%p\n",&n);
    printAddress(n);

    return 0;
}

void printAddress(int n)
print("%p\n", &n);
*/

// sol:-

#include<stdio.h>

//void printAddress(int n);
void _printAddress(int *n);

int main() {
    int n = 4;

   // printf("%p\n",&n);
   // printAddress(n);

    _printAddress(&n);
    printf("%u\n",&n);

    return 0;
}

// void printAddress(int n) {
// printf("%p\n", &n);
// }

void _printAddress(int *n) {
printf("%u\n",n);
}

// so the ans is no, but will be same when we take 'value by refernce' .