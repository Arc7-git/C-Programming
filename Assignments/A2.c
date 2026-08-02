/*
Problem Statement:
Write a menu driven program in C to implement the basic arithmetic operations
such as Addition, Subtraction, Multiplication, and Division.
*/
#include <stdio.h>
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

    default:
        printf("invalid choice");
        break;
    }
}