// 4).strcmp(firstStr,secStr) ---> it compares two strings and returns a value
//  (depended upon ASCII values of the content);
// if returned 0 then strings are equal
// positive -> first > second (ASCII)
// negative -> first < second (ASCII)

#include<stdio.h>
#include<string.h>

int main() {
    char firstStr[] = "Apple";
    char secStr[] = "Bananas";

    printf("%d\n", strcmp(firstStr, secStr));
    printf("%d\n", strcmp(secStr, firstStr));

    return 0;
}