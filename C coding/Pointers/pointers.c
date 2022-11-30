// A variable that stores the memory address of another variable.
// syantax
// int age = 22;
// int*ptr = &age; * --> value at address operater.
//                 & --> address of operator.
// int_age = *ptr; it will show the value at address which is stored at pointer.

// here we made a pointer variable (*ptr) and assigned it the address of "age"
// to understand the above information more conviently there is a image stored in pointers folder named "PointerUnderstanding". 

#include<stdio.h>

 int main() {
    int age = 18;
    int *ptr = &age; // here &age --> represnts the address of age in memory; 
    int _age = *ptr;

    printf("\n%d",*ptr); // 18
    printf("%d\n",& age); // address of age
    printf("\n%d",_age); // 18
    return 0;
} 

/*
int main() {
int *ptr;
int x;

ptr = &x; // means we have an integer 'x' it address is stored in the value of pointer (ptr). 
*ptr = 0; // x = 0

printf("x = %d\n",x); // 0
printf(" *ptr = %d\n", *ptr); // 0

*ptr = *ptr + 5; // (*ptr += 5;) // x = 5
printf("x = %d\n", x); // 5
printf(" *ptr = %d\n", *ptr); // 5

(*ptr)++; // (*ptr = *ptr +1);
printf("x = %d\n", x); // 6
printf(" *ptr = %d", *ptr); // 6

return 0;
}

*/