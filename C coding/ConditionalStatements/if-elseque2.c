// write a Program to give grades to a student 
/*
marks < 30 is C
30 <= marks < 70 is B
70 <= marks < 90 is A
90 <= marks <= 100 is A+
*/

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks(0-100)");
    scanf("%d",&marks);

    if(marks <=100 && marks>=90)
    {printf("A+");}
    
    else if(marks<90 && marks>=70)
    { printf("A\n");}
    
    else if(marks<70 && marks>=30)
    {printf("B");}
    
    else if(marks<30)
    {printf("C");}
    
    return 0;
}
