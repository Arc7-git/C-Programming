#include <stdio.h>
#include <math.h>
// binary to Decimal
int main()
{
    int n, temp, res = 0;
    printf("Enter a binary number\n");
    scanf("%d", &n);
    int i = 0;
    while (n > 0)
    {
        temp = n % 10;
        res += temp * (pow(2, i));
        n = n / 10;
        i++;
    }
    printf("%d", res);
}