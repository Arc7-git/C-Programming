/*Write a program in C to check whether the given number is an Armstrong number or not.
An Armstrong number is an integer with three digits such that the sum of the cubes of its digits is equal to the number itself.
Example: 371*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int flag = 0;
    int res = 0;

    while (temp > 0)
    {
        temp = temp / 10;
        flag++;
    }
    temp = n;
    for (int i = 1; i <= flag; i++)
    {
        int a = temp % 10;
        res = res + (pow(a, flag));
        temp = temp / 10;
    }

    if (res == n)
    {
        printf("the number %d is an amstrong number", n);
    }
    else
    {
        printf("not an armstrong number");
    }
    return 0;
}
