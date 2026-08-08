// Write a C function to swap two numbers with and without using pointers.
#include <stdio.h>

void swapWithoutPointer(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapWithoutPointer: a = %d, b = %d\n", a, b);
}

void swapWithPointer(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int x = 10, y = 20;
    int p = 10, q = 20;

    // Without pointer
    swapWithoutPointer(x, y);
    printf("After swapWithoutPointer: x = %d, y = %d\n\n", x, y);

    // With pointer (arithmetic)
    swapWithPointer(&p, &q);
    printf("After swapWithPointer: p = %d, q = %d\n", p, q);

    return 0;
}