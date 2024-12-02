#include <stdio.h>

void BubbleSort(int arr[], int size)
{
    if (size == 1)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    BubbleSort(arr, size - 1);
}

int main()
{
    int arr[] = {12, 1, 14, 3, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);
    printf("sorted elements of Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
