/*Write a program in C to simulate a simple calculator that performs basic arithmetic operations
such as addition, subtraction, multiplication, and division.
The calculator should also perform special operations like computing xʸ (power) and x! (factorial).
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    char op;
    printf("enter 2 numbers for calculation\n");
    scanf("%f %f", &a, &b);
    printf("enter the operator:\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%f\n", a + b);
        break;
    case '-':
        printf("%f\n", a - b);
        break;
    case '/':
        if (b == 0)
        {
            printf("invalid");
            return 0;
        }
        printf("%f\n", a / b);
        break;

    case '*':
        printf("%f\n", a * b);
        break;
    case 'p':
        printf("%f\n", pow(a, b));
        break;
    case 'f':
        int n;
        double fact = 1;
        printf("Enter a number to get its factorial:\n");
        scanf("%d", &n);
        int i;
        for (i = n; i >= 1; i--)
        {
            fact *= i;
        }
        printf("%f", fact);

    default:
        printf("invalid choice");
    }
    return 0;
}