#include <stdio.h>

void FindMax_Min(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int n;
    printf("enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements in the array: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element: %d\n", i + 1);
        scanf("%d", &arr[i]);
    }

    int max, min;
    FindMax_Min(arr, n, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}