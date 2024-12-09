#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}
