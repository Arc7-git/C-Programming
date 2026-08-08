// To accept the number of terms and find the sum of the sine series.
#include <stdio.h>

int main()
{
    int n, i, sign = 1;
    float x, term, sum = 0, power, fact;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        fact = 1;

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            power *= x;
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            fact *= j;
        }

        term = power / fact;
        sum += sign * term;

        sign = -sign; // alternate signs
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}