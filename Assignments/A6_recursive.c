#include <stdio.h>
//Write a C function to compute the factorial of a number with and without recursion.

int fact(int n);
int main()
{
    printf("Enter number to find factorial ");
    int n;
    scanf("%d", &n);
    int res = fact(n);
    printf("%d", res);
}
int fact(int n)
{
    int res;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    res = n * fact(n - 1);
    return res;
}