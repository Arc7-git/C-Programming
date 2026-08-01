#include <stdio.h>
// Write a program to print prime numbers in a range
int main()
{
    int a, b, flag = 0;
    printf("enter the range ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
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
            printf("%d\n", i);
        }
        flag = 0;
    }
}