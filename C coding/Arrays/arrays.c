// Arrays --> Collection of similar data types stored at contiguous memory locations

#include<stdio.h>

int main() {

   // int marks1 = 98;
   // int marks2 = 100;
   // int marks3 = 99;

     int marks [3] = {98, 100, 99};
    
    // int marks[3];
/*
    printf("enter physic : ");
    scanf("%d", &marks[0]);

     printf("enter math : ");
    scanf("%d", &marks[1]);

     printf("enter chemistry : ");
    scanf("%d", &marks[2]); */

    printf("physics = %d, math = %d, chemistry = %d\n", marks[0],marks[1],marks[2]);


    return 0;
}

// Syntax;
/*
int main[3]; ---> '[]' are filled with the no of integer we want to defined in..
so here actually 3 block of integer are created and due to integer data type each block will have size of '4 bytes'
therefore, total of 12 bytes is stored in memory
int --> 4 bytes;
char --> 1 byte;
float --> 4 byte;

eg;-

char name [2] = {ramesh, suresh};

float price [3] = {100.33, 99.00, 30.44};
*/