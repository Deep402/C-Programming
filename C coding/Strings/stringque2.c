// Make a program that inputs user's name & prints its length.
// very important que.
// new variant of the que, (check the no. of time the character 'i' is repeating in the sentence) for revision.
#include<stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char name [100];
    printf("Enter the word/sentences to calculate the length : \n");
    fgets(name, 100, stdin);
    printf("Lenght is : %d\n", countLength(name));
    return 0;
}
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
   // return count-1; // it is also calulating null character 
}
void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}