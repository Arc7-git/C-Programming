#include <stdio.h>
// time complexity= O(n)
void sentinel_search(int arr[], int n, int target);
int main()
{
    int n, target;
    printf("enter the size of array to be searched : ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the elements of the array one by one :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    sentinel_search(arr, n, target);
}
// sentinel Search Algo
void sentinel_search(int arr[], int n, int target)
{
    arr[n] = target;
    int i = 0;
    while (target != arr[i])
    {
        i++;
    }
    i < n ? printf("\nelement Found") : printf("\nElement Absent ");
}