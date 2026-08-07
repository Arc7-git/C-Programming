#include <stdio.h>
/*Write a program in C to accept two numbers from the user and compute:
a) The smallest common divisor of the two numbers (other than 1, if any)
b) The Greatest Common Divisor (GCD) of the two numbers
*/
int main()
{
    int a, b, gcd = 1, lcd = -1;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    int min = (a > b) ? a : b;
    for (int i = 2; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (lcd == -1)
            {
                lcd = i;
            }
            gcd = i;
        }
    }
    if (lcd == -1)
    {
        printf("No lcd other than one");
    }
    else
    {
        printf("LCD and GCD are %d %d", lcd, gcd);
    }
}