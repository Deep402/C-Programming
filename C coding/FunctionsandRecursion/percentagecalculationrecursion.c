// write a function to calculate Percentage of a student from Marks in 
// Science, Math & Sanskrit.

 #include<stdio.h>

 int calcPercentage(int Science, int Math, int Sanskrit);

 int main() {
    int sci = 95;
    int Math = 99;
    int Sanskrit = 100;

    printf("percentage is : %d", calcPercentage(sci,Math,Sanskrit));
return 0;
 }

int calcPercentage(int Science, int Math, int Sanskrit) {
    return ((Science + Math + Sanskrit) / 3);
}