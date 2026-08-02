#include <stdio.h>
//Write a program in C to generate multiplication tables for a given number.
int main()
{
    int a;
    scanf("%d", &a);
    int i = 1;

    while (i <= 10)
    {
        printf("%dx%d=%d\n", a, i, a * i);
        i++;
    }

    return 0;
}