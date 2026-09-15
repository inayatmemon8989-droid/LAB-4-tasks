#include<stdio.h>

int main(){
    float c, f;
    printf("enter celsius: ");
    scanf("%f", &c);

    // must use 9.0/5.0 otherwise c gives wrong output
    f = (c * 9.0 / 5.0) + 32;

    printf("Fahrenheit: %.2f\n", f);

    return 0;
}
