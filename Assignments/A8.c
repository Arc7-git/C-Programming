#include <stdio.h>
/* Write a program in C to accept marks of five courses of a student and compute the result.
A student is considered PASS if he/she scores 40 marks or more in each course.
If the student passes, calculate the aggregate percentage and assign the grade as follows:
• Aggregate ≥ 75% : Distinction
• Aggregate ≥ 60% and < 75% : First Division
• Aggregate ≥ 50% and < 60% : Second Division
• Aggregate ≥ 40% and < 50% : Third Division */
int main()
{
    int phy, maths, eng, comp, chem, per;
    printf("Enter the marks in the order phy,maths,eng,comp,chem ,out of 100\n");
    scanf("%d %d %d %d %d", &phy, &maths, &eng, &comp, &chem);
    int sum = phy + maths + eng + comp + chem;
    if (phy < 40 || maths < 40 || eng < 40 || comp < 40 || chem < 40)
    {
        printf("FAIL!");
    }
    else
    {
        per = sum / 5;
        printf("Percentage: %d\n", per);
        if (per >= 75)
        {
            printf("Distinction\n");
        }
        else if (per >= 60)
        {
            printf("First Division\n");
        }
        else if (per >= 50)
        {
            printf("Second Division\n");
        }
        else if (per >= 40)
        {
            printf("Third Division\n");
        }
    }
}