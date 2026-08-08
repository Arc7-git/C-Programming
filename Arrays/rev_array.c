#include <stdio.h>
// reverse an array
int main()
{
    int arr[10];
    int rra[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        rra[9 - i] = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rra[i]);
    }
}
