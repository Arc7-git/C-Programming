#include <stdio.h>
// time complexity =O(n^2)
void shell_sort(int arr[], int n);
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
    shell_sort(arr, n);
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
void shell_sort(int arr[], int n)
{
    int gap = n / 2;
    do
    {
        int swap_flag;
        do
        {
            swap_flag = 0;
            for (int i = 0; i < n - gap; i++)
            {
                int temp;
                if (arr[i] > arr[i + gap])
                {
                    temp = arr[i];
                    arr[i] = arr[i + gap];
                    arr[i + gap] = temp;
                    swap_flag = 1;
                }
            }

        } while (swap_flag == 1);
    } while ((gap = gap / 2) >= 1);
}
