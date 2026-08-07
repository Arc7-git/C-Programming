#include <stdio.h>
/*Write a program in C to accept a number from the user and print the digits of the number in reverse order*/
int main()
{
    int n, last;
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 0; n != 0; i++)
    {
        last = n % 10;
        printf("%d", last);
        n = n / 10;
    }
}