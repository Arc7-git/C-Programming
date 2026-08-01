#include <stdio.h>
int main()
{
    // Write a program to determine whether a student has passed or failed. To pass, a
    // student requires a total of 40% and at least 33% in each subject. Assume there
    // are three subjects and take the marks as input from the user.
    int max_marks, eng, maths, sci;
    printf("enter the maximum marks in each subject:\n");
    scanf("%d", &max_marks);
    printf("\nenter the marks of eng sci and maths :\n");
    scanf("%d %d %d", &eng, &sci, &maths);
    float passing = (3 * max_marks) * (0.4);
    float min = (0.33 * max_marks);
    if (eng < min || sci < min || maths < min || (maths + sci + eng) < passing)
    {
        printf("fail");
    }
    else
    {
        printf("pass");
    }
}