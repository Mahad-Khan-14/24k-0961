#include <stdio.h>

void printArray(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    printf("%d ", arr[0]);

    printArray(arr + 1, size - 1);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Elements of Array: ");
    printArray(arr, size);
    return 0;
}