// 2). strcpy(newStr, oldStr) 
//     copies value of old string to new string.

#include<stdio.h>
#include<string.h>

int main() {

    char str1 [] = "Hello";
    char str2 [] = "World";

    strcpy(str1,str2); // ----> so here the content of str2 will be copied in the content of str1 and will be replaced.
    puts(str1);

return 0;
}