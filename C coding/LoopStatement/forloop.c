// To Repeat some parts of the program we use loop functions
// there are mainly three types of loop statement 1).for , 2).while , 3).do while.

//1). for loop
/* for(initialisation;condition;updation)
   { //do something }
*/
//que Print the Numbers from 0 to 10
#include<stdio.h>
int main()
    {
  //  i =i+1; //i+ = 1
    for (int i=0; i<=10; i++)
    {
        printf("%d\n",i);
    }
    return 0;
    }

//Special Things.
/*  -Increment Opreator
    -Decreament Opreator
    -Loop counter can be float or even character
    -Infinte Loop
*/
// same for float function
/* 
int main()
 { for(float i=1.0; i<=5.0; i++)
   { print("%.5f", i);
   }
   return 0;
*/
  //OUTPUT -----> 1.00000,2.00000,3.00000,4.00000,5.00000
/*
int main()
{for(char ch='a'; ch<='z'; ch++)
{
    printf("%c\n", ch);
}
return 0;
}
*/
//OUTPUT ---> a b c d e f g ... z