// Write a C program to generate pseudo random numbers.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);

    srand(time(0));

    printf("Random numbers:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}