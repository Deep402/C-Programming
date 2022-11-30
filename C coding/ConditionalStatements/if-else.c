#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter a number greater than 100 :");
    scanf("%d",&a);
 /* conditonal statement syntax
    if(condn) //do something if TRUE
    { 
        statements;
    }
    else     //do something if FALSE
    {  
        statements;
    }
 */
 if(a>100)
    {
        printf("\n Correct Number");
    }
    else
    {
        printf("\n Incorrect Number");
    }
     return 0;
}