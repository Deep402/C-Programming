// Pointer Arithmetic 
// Pointer can be incremented & decremented 

// case-1;
#include<stdio.h>

int main() {

int age = 19;
int *ptr = &age;

printf("*ptr = %p\n", ptr);
ptr++;
printf("*ptr = %p\n", ptr);
ptr--;
printf("*ptr = %p\n", ptr);

return 0;

}
// here increamenting and decremanting in pointer means not to increatement the value but the address;
// eg: int = 22 --> address 12352
// using ptr++ --> it will shift to the next address value because here we have use 'int' therefore the address 
// will shfit the address by 4 bytes;
// we will have the access of the value in the memmory address of 12356.


