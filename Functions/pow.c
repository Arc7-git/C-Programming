#include <stdio.h>
// Make your own pow function
void power(int a, int b);
int main()
{
    int a, b;
    printf("enter the numbers in the format a to the power b\n");
    scanf("%d %d", &a, &b);
    power(a, b);
}
void power(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    printf("%d", res);
}
