#include <stdio.h>
#include <math.h>
// check for armstrong number
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int temp2 = n;
    int flag = 0;
    int res = 0;

    while (1)
    {
        if (temp < 10)
        {
            flag++;
            break;
        }
        temp = temp / 10;
        flag++;
    }

    for (int i = 1; i <= flag; i++)
    {
        int a = temp2 % 10;
        res = res + (pow(a, flag));
        temp2 = temp2 / 10;
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
