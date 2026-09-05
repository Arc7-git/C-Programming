#include <stdio.h>
// time complexity =O(n^2)
void insertion_sort(int arr[], int n);
void display(int arr[], int n);
int main()
{
    int n;
    printf("enter the size of array to be sorted in Ascending order : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array one by one :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
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
void insertion_sort(int arr[], int n)
{
    int current, prev;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}