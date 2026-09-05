#include <stdio.h>
//time complexity= O(n)
void linear_search(int arr[], int n, int target);
int main()
{
    int n, target;
    printf("enter the size of array to be searched : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array one by one :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    linear_search(arr, n, target);
}
// Linear Search Algo
void linear_search(int arr[], int n, int target)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
            flag++;
    }
    flag >= 1 ? printf("\nelement Found") : printf("\nElement Absent ");
}