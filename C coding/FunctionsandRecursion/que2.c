// Write a function that prints Namaste is user is Indian & Bonjour if the user is French.
/*
#include<stdio.h>

void namaste();  //declaration/prototype
void bonjour();

int main() {
    printf("enter f for french & i for indian :"); //function call
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {   // here given i '' will asign its ascii value. not a character!
        namaste();
    } else {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("Namaste\n");
}
void bonjour() {
    printf("Bonjour\n");
}
*/

#include<stdio.h>

void namaste();
void Bonjour();

int main() {
printf("enter f for french and i for indian\n");
char ch;
scanf("%c",&ch);
if (ch == 'i'){
    namaste();
}
else {
    Bonjour();
}
return 0;
}

void namaste() {
    printf("Namaste\n");
}
void Bonjour() {
    printf("Bonjour");
}