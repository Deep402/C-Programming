// 3). strcat(firstStr, secStr) --> concatenates first string with the second string.
// used in Concatenation (combine 2 strings,note length of str1 > length of str2).

#include<stdio.h>
#include<string.h>

int main() {
    char firstStr[10]  = "Hello";
    char secString[] = "World";

    strcat(firstStr, secString);
    puts(firstStr);

    return 0;
}