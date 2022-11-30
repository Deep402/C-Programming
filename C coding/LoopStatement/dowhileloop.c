//syntax Do While Loop

/*
do{
    do something
}
while (condition);
*/
#include<Stdio.h>
int main()
{
    int i=5;
    do {
        printf("%d\n",i);
        i--;
    } while(i>=1);
    return 0;
}