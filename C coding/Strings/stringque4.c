// Write a function named slice, which take a string & returns a sliced string from index n to m.

#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main() {
    char str[] = "Helloworld";
    slice(str,3,6);
return 0;
}


void slice(char str[], int n, int m) { // n & m are valid values.
    char newStr[100];
    int j=0;
    for(int i=n; i<=m; i++,j++) { 
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}