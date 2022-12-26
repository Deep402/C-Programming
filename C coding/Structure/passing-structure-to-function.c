// Passing structure to function

//Function Portotype
// void printInfo(struct student s1);

// to call it;
// struct student s1;
// printInfo(s1);

#include<stdio.h>
#include<string.h>

//user defined
struct student {
    char name[100];
    int rollno;
    float cgpa;
};

void printInfo(struct student s1);

int main() {
    struct  student s1 = {"sharadha",1664, 9.2};
    printInfo(s1);
    
    printf("student roll = %d\n", s1.rollno);
    return 0;
}

void printInfo(struct student s1) {
    printf("student information : \n");
    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.rollno);
    printf("student cgpa = %.1f\n",s1.cgpa);

    s1.rollno = 1660;
}