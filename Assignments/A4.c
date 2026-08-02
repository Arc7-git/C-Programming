/*PROBLEM STATEMENT: Write a C Program to
calculate the salary of an employee given his basic pay (taken as input from the user).
Calculate gross salary of employee. Let HRA be 10 % of basic pay and TA be 5% of basic pay.
Let employees pay professional tax as 2% of  total salary.
Calculate net salary payable after deductions*/
#include <stdio.h>

int main()
{
    int bs;
    float hra, ta, pt, ns, gs;

    printf("enter your base salary");
    scanf("%d", &bs);

    hra = 0.1 * bs;
    ta = 0.05 * bs;
    gs = bs + hra + ta;
    pt = gs * 0.02;
    ns = gs - pt;

    printf("%d %f %f %f %f %f", bs, hra, ta, pt, ns, gs);

    return 0;
}