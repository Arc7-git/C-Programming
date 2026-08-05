#include <stdio.h>
// Write a C function to compute the factorial of a number with and without recursion.

int main()
{
    int n;
    long fact = 1;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    printf("%f", fact);
}