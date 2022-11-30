/* write a program to find if a character entered by user is upper case or not. */
#include <stdio.h>
int main()
{
char ch;
printf("enter character : ");
scanf("%c",&ch);

ch >= 'a' && ch <= 'z'? printf("Lower case\n") : ch>= 'A' && ch<= 'Z';
return 0;
}
