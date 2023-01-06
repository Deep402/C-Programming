// Standard Library Functions ----> <string.h> it must be used as standard library first! like #include<string.h>

/*
1). strlen(str
    count number of character excluding '\0'
*/
#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char name [100];
    printf("Enter the word/sentences to calculate the length : \n");
    fgets(name, 100, stdin);
    int length = strlen(name);
    printf("Length is : %d\n",length-1);
    return 0;
}
/*
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1; // it is also calulating null character 
}
*/
/*void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
*/