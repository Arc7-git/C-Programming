#include <stdio.h>
// write a func to print n terms of fibonacci squence using recursion
int fibo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
}

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}