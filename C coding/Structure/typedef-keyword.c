// typedef keyword
// used to create alias for data types

// syntax

// typdef struct ComputerEngineeringStudent {
//    int roll;
//    float cgpa;
//    char name[100];
// } coe;

// to access

// coe student1;

#include<stdio.h>
#include<string.h>

//user defined
typedef struct student {
    char name[100];
    int rollno;
    float cgpa;
} stu ;

//user defined
typedef struct ComputerEngineeringStudent {
    char name[100];
    int rollno;
    float cgpa;
} coe;

int main() {
    coe s1;
    s1.rollno = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "deep");

    printf("student name is %s\n", s1.name);

    return 0;
}