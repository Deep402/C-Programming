// String Format Specifier
// ---> '%s'

// char name[] = "Deep";
// printf("%s",name);
// scanf("%s",name);

// Que).
// 1).Ask the user to enter their firstName & print it back to them.
// 2).Also try this with their fullName.


// 1).
#include<stdio.h>

int main() {
    char fullName[50];
    scanf("%s",fullName);
    printf("your fullName is %s\n",fullName);
    return 0;
}

// 2).
// Important 
// scanf() cannot input multi-word strings with spaces,
// Here, gets() & puts() come into picture.