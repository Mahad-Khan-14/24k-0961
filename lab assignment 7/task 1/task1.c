#include <stdio.h>
int main()
{
    int size, sum = 0;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size > 100)
    {
        printf("Error: size(%d) exceeds the array limit of 100", size);
        return 1;
    }

    printf("Enter %d elements of array: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Sum of the elements of array: %d\n", sum);

    return 0;
}