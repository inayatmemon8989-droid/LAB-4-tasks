#include<stdio.h>

int main(){
    char name[40];
    char ch;

    printf("enter student name: ");
    fgets(name, 40, stdin);

    printf("enter section (single char): ");
    scanf(" %c", &ch); // added space to skip previous newline

    printf("Name: ");
    puts(name);

    printf("Section is: %c\n", ch);

    return 0;
}
