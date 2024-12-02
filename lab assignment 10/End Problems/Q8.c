#include <stdio.h>

int search(int arr[], int size, int target, int index)
{
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }

    return search(arr, size, target, index + 1);
}

int main()
{
    int arr[] = {12, 1, 14, 7, 3, 15};

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The array given: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    int target;
    printf("\nEnter number to find: ");
    scanf("%d", &target);

    int result = search(arr, size, target, 0);
    if (result != -1)
    {
        printf("Element: %d found at index: %d", target, result + 1);
    }
    else
    {
        printf("Element %d not Found", target);
    }

    return 0;
}
