// Pointers to structure

// struct student s1;
// strucr student *ptr;

// ptr = &s1;
#include<stdio.h>
#include<string.h>

//user defined
struct student {
    char name;
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"deep",1990,9.0};
    printf("student roll = %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %d\n", (*ptr)); // its pointing to whole s1 
    // output will 4 as we mentioned %d(4 bytes)
    //Arrow Operator  

    //(*ptr).code <-> ptr->code
    printf("student roll = %d\n", (*ptr).roll); // only pointing to roll
    printf("student roll = %d\n", ptr->roll);
    return 0;
}
