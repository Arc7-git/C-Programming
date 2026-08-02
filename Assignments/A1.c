#include <stdio.h>
// Write a program in C to check whether a given year is a Leap Year
int main()
{
    int yr;
    scanf("%d", &yr);
    if (yr % 400 == 0)
    {
        printf("the year %d is a leap year ", yr);
    }
    else if (yr % 4 == 0 && yr % 100 != 0)
    {
        printf("the year %d is a leap year ", yr);
    }

    else
    {
        printf("the year %d is NOT a leap year ", yr);
    }
}