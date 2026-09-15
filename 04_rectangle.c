#include<stdio.h>

int main() {
    float l, w, a, p;

    printf("enter length and width: ");
    scanf("%f %f", &l, &w);

    a = l * w;
    p = 2 * (l + w);

    printf("area = %f\n", a);
    printf("perimeter = %f\n", p);

    return 0;
}
