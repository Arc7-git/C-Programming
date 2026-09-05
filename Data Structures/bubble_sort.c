#include <stdio.h>
// time complexity =O(n^2)
void bubble_sort(int arr[], int n);
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
    bubble_sort(arr, n);
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
void bubble_sort(int arr[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int swap_flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap_flag++;
            }
        }
        if (swap_flag == 0)
            return;
    }
}
