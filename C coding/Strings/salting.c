// Find the salted from of a password entered by user if the salt is "123" & added at the end.
// What is salting :- salting is a string of words,letter, character or symbols which emebbed into an passcode to 
// make it more secure and safer from geeting bridged.

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main() {

    char password[100];
    scanf("%s",password);
    salting(password);
}

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // newPass = "test" 
    strcat(newPass, salt);   // newpass = "test + 123"
    puts(newPass);
}