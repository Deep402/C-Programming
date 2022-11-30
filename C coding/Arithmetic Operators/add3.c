#include<stdio.h>
int main()
{
int rollno,total,avg,math,sci,eng;
printf("\n Enter rollno,Science,Maths,English : ");
scanf("%d %d %d %d",&rollno,&sci,&math,&eng);
total = sci+math+eng;
avg = total/3;

printf("\n Rollno : %d",rollno);
printf("\n Total Marks : %d",total);
printf("\n Average : %d",avg);

return 0;
}