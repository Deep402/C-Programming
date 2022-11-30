//Switch
/* 
switch(number)
{
    case c1: //do somthing
        break;
    case c2: //do somthing
        break;
    default: //do somthing
} 
*/
#include<stdio.h>
int main()
{
    int day; //1-Mon; 2-Tue; 3-Wed.
    printf("enter day(1-7)\n");
    scanf("%d",&day);

    switch (day)
    {
    case 1 : printf("\nMonday");
        break;
    case 2 : printf("\nTuesday");
        break;
    case 3 : printf("\nWednesday");
        break;
    case 4 : printf("\nThursday");
        break;
    case 5 : printf("\nFriday");
        break;
    case 7 : printf("\nSaturday");
        break;
    case 6 : printf("\nSunday");
        break;
    default : printf("Not a valid day\n");

    }
return 0;


}
