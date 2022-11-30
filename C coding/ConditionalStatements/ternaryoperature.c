// Format :-
/* condition ? dosomething if TRUE : dosomething if FALSE; */
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : \n");
    scanf("%d",&age);

    age >= 18 ? printf("adult\n") : printf("not adult\n");
    return 0;
}