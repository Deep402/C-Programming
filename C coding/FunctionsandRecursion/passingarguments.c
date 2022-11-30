// Passing Arugments.
// functions can take value & give some value
// it take in 'parameter' and give out 'return value'
 // eg.
// 1). void printHello();
// 2). void printTable(int n); // here it will make the take of n as result and will not return any value;
// 3). int sum(int a, int b);  // here it will sum a+b; and as a result it will return a value as integer.

#include<stdio.h>

int sum(int a, int b);
void printTABLE(int n);


int main() {
   // int a,b;
// printf("enter first number : ");
//    scanf("%d",&a);
//    printf("enter second number : ");
//    scanf("%d",&b);

//  int s = sum(a,b);
//    printf("sum is %d \n", s);

    int X;
    printf("Enter the number \n");
    scanf("%d",&X);
 
    printTABLE(X); //argument/actual parameter
    return 0;
}

//int sum(int X, int Y) {
    //return X + Y;
//}
void printTABLE(int n) { //parameter/formal parameter
    for(int i=1 ; i<=10 ; i++) {
      printf("%d*%d=%d\n",n,i,n*i);
      }
}


// There are two code here; one of the code is commented out!