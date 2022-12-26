// Initalizing Structures.

// struct student s1 = {"deep",1990,9.0};
// struct student s2 = {"dhyey",2003,9.2};
// struct student s3 = {0};

#include<stdio.h>
#include<string.h>

//user defined
struct student {
    char name;
    int rollno;
    float cgpa;
};

int main() {
    struct student s1 = {"deep",1990,9.0};
    struct student s2 = {"dhyey",2003,9.2};
    struct student s3 = {0}; 

    printf("student roll = %d\n",s1.rollno);
    printf("student name = %.1f\n %.1f\n %.1f\n",s1.cgpa,s2.cgpa,s3.cgpa);
    return 0;
}

