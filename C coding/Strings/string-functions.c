// String Functions

//1). get(str) ---> same as fget but Dangerous & Outdated (inputs a string even multiword);
//2). puts(str) ---> output a string
//3). fgets(str,n,file) ---> it function is take multiple values from user, 
//     stops when n-1 char inputs or new line is entered.

// fgets --> 'str' is string, 'n' is size, file just put 'stdin' for now 

#include<stdio.h>

int main() {

    char str[100];
   // gets(str);
    fgets(str, 100, stdin);
    puts(str);
    
    return 0;
}