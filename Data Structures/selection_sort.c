#include <stdio.h>
// time complexity = O(n^2)
void selection_sort(int arr[], int n);
void display(int arr[], int n);
int main()
{
    int n;
    printf("enter the size of array to be sorted in Ascending sort : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array one by one :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    display(arr, n);
}
void display(int arr[], int n)
{
    printf("The sorted array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest_index = i, temp;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest_index])
                smallest_index = j;
        }
        temp = arr[i];
        arr[i] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
}