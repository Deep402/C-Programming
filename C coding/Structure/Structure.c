// Syntax
#include<stdio.h>
#include<string.h>

//user defined
struct student {
    
    char name[100];
    int roll;
    float cgpa;
};
// and to acces the structure when use s1.name or s1.roll = xyz;


int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //s1.name = "deep"
    strcpy(s1.name, "deep");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("\n \n");
    
    struct student s2;
    s2.roll = 2004;
    s2.cgpa = 8.5;
    //s1.name = "harsh"
    strcpy(s2.name, "harsh");

    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    printf("\n \n");
    
    struct student s3;
    s3.roll = 2003;
    s3.cgpa = 9.9;
    //s1.name = "Dhyey"
    strcpy(s3.name, "Dhyey");

    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    return 0;
}