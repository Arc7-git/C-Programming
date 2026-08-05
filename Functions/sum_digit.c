#include <stdio.h>
// Write a function to find sum of digits of a number.
void sum_digits(int a);
int main()
{
    int a;
    scanf("%d", &a);
    sum_digits(a);
}
void sum_digits(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    printf("%d", sum);
}