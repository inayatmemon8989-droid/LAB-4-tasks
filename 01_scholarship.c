#include<stdio.h>

int main()
{
    int m;
    float inc;

    printf("enter student marks: ");
    scanf("%d",&m);

    printf("enter income: ");
    scanf("%f", &inc);

    if(m>=80 || inc < 50000)
    {
        printf("got scholarship!!\n");
    }
    else
    {
        printf("not eligible for scholarship\n");
    }

    return 0;
}
