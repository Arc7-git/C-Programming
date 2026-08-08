#include <stdio.h>
// seperate even and odd numbers
int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int even[n];
    int odd[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e++] = arr[i];
        }
        else
        {
            odd[o++] = arr[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}