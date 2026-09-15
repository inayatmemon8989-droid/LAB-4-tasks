#include<stdio.h>

int main() {
    float a,b,c;
    printf("enter 3 values: ");
    scanf("%f%f%f", &a,&b,&c);

    float avg = (a+b+c)/3.0;

    printf("average = %.2f\n", avg);
    return 0;
}
