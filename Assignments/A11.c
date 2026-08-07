/*Write a program in C to accept a number from the user and compute the following:

a) Square root of the number
b) Square of the number
c) Cube of the number
d) Check whether the number is prime
e) Factorial of the number
f) Prime factors of the number */
#include <stdio.h>
#include <math.h>
int main()
{
    int flag = 0;
    int n;
    int fact = 1;
    printf("Enter a number to do all the Operations:\n");
    scanf("%d", &n);
    printf("\n");

    printf("Square root of %d = %.5f\n", n, sqrt(n));

    printf("Square of %d = %d\n", n, n * n);

    printf("Cube of %d = %d\n", n, n * n * n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    if (flag == 1)
        printf("1 is a unique number\n");
    else if (flag == 2)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d\n", n, fact);

    printf("the prime factors of %d are:\n", n);
    flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag++;
                }
            }

            if (flag == 2)
            {
                printf("%d ", i);
            }
        }
        flag = 0;
    }
}
