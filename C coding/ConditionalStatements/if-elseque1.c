/*write a program to check if a student passed or failed.
marks > 30 is PASS
marks <= 30 is FAIL*/

#include<stdio.h>
int main()
{
    int c;
    printf("enter your marks(0-100)");
    scanf("%d",&c);

    if(c>30 && c<=100)
    {
        printf("PASS");
    }
    else if (c>30 && c<=100)
    {
    printf("FAIL");
    }
    else 
    {
        printf("Worng Marks Entered");
    }
return 0;
}

// SOLVING THE SAME PROBLEM USING TERNARY OPREATOR.
// condition ? dosomething if TRUE : dosomething if FALSE;
/*
#inlcude<stdio.h>
int main()
{
 int marks;
 printf("enter your marks(0-100)");
 scanf("%d",&marks);

 marks <=30 ? printf("Fail \n") : printf("PASS\n");
 return 0; 
}
*/
