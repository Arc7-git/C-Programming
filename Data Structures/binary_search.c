#include <stdio.h>
// time complexity= O(log n)
int binary_search(int arr[], int n, int target);
int main()
{
    int n, target;
    printf("enter the size of array to be searched : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Sorted array one by one in Ascending order :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    int res = binary_search(arr, n, target);
    if (res == -1)
        printf("Element not found");
    else
        printf("Element Found at index %d", res);
}
// binary Search
int binary_search(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target > arr[mid])
            start = mid + 1;
        else if (target < arr[mid])
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}