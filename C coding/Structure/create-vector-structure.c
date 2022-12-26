// Calculate the sum of 2 vector;

#include<stdio.h>
#include<string.h>

struct vector {
    int x;
    int y;
};

void caluSum(struct  vector v1, struct vector v2, struct vector sum);

int main() {
    int a,b,c,d;
    printf("enter the first vector : ");
    scanf("%d\n %d",&a,&b);
    printf("enter the sceond vector : ");
    scanf("%d\n %d",&c,&d);
    
    struct vector v1 = {a,b};
    struct vector v2 = {c,d};
    struct vector sum = {0};

    caluSum(v1, v2, sum);

    return 0;
}

void caluSum(struct  vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);

    printf("sum of y is %d\n", sum.y);
}
