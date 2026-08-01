/* p1-1
      12
      123
      12345
      123456 ......n times

   p2- 1
       2 3
       4 5 6
       7 8 9 10......ntimes

   p3- 543210
       43210
       3210
       210
       10
       0

   p4-       1
            12
           123
          1234
         12345....n times */

#include <stdio.h>
void p1()
{          //  Right half pyramid of numbers
    int n; // number of rows
    printf("enter the number of rows to be printed ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void p2()
{
    // Floyd's Triangle

    int n, a = 1; // number of rows and counter
    printf("enter the number of rows to be printed ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}

void p3()
{
    // inverted  half right triangle

    int n; // number of rows and counter
    printf("enter the number of rows to be printed ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void p4()

{
    int n;
    printf("enter the number of rows to be printed ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // print numbers
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}

int main()
{

    printf("enter which patter you want to print");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        p1();
        break;

    case 2:
        p2();
        break;

    case 3:
        p3();
        break;

    case 4:
        p4();
        break;
    }

    return 0;
}