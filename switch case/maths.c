/*
Problem Statement:
Write a C program that acts as a simple calculator using a switch-case statement.

The program should:
1. Take two floating-point numbers as input from the user.
2. Take a single character as input representing the operation to be performed.
3. Based on the operator entered, perform the corresponding operation using switch-case:
   - '+' : Add the two numbers
   - '-' : Subtract the second number from the first
   - '*' : Multiply the two numbers
   - '/' : Divide the first number by the second (check for division by zero)
   - 'p' : Calculate a raised to the power b using the math library
   - 's' : Calculate and display the square root of both numbers using the math library
4. Display the result of the selected operation.
5. If an invalid operator is entered, display an appropriate error message.

Use functions from the math library where required.
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
    case 's':
        printf("the squreroot of a is \n%f", sqrt(a));
        printf("the squreroot of b is \n%f", sqrt(b));
        break;
    default:
        printf("invalid choice");
    }
}