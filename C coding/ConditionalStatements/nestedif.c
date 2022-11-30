/*
“Nested if” Statement 
Writing if statement inside another if statement is called as nested if. 
Syntax : if(condn) 
{ 
if(condn) 
  { 
   statements; 
  } 
} 
*/
#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter number : ");
    scanf("%d", &number);

    if(number>= 0)
    {
      printf("positive\n");
      if(number % 2 ==0)
      {
        printf("Even");
        }
      else 
      {
       printf("Odd");
      
      }
    }
    else
    {
      printf("Negative");
    }
 return 0;

}
