#include <stdio.h>

#define MAX 100

// Global array 'a' and auxiliary global array 'b' as specified in the slides
int a[MAX];
int b[MAX];

void Merge(int low, int mid, int high)
{
    int h = low;
    int i = low;
    int j = mid + 1;

    // Compare and merge elements into auxiliary array b[]
    while ((h <= mid) && (j <= high))
    {
        if (a[h] <= a[j])
        {
            b[i] = a[h];
            h = h + 1;
        }
        else
        {
            b[i] = a[j];
            j = j + 1;
        }
        i = i + 1;
    }

    // Copy remaining elements of the second half, if any
    if (h > mid)
    {
        for (int k = j; k <= high; k++)
        {
            b[i] = a[k];
            i = i + 1;
        }
    }
    // Copy remaining elements of the first half, if any
    else
    {
        for (int k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i = i + 1;
        }
    }

    // Copy sorted elements from auxiliary array b back into original array a
    for (int k = low; k <= high; k++)
    {
        a[k] = b[k];
    }
}

void MergeSort(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort the array from index 0 to n - 1
    MergeSort(0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}