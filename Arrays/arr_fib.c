#include <stdio.h>
void fib(int fibo[], int n)
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[(i - 1)] + fibo[(i - 2)];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int fibo[n];
    fib(fibo, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibo[i]);
    }
}