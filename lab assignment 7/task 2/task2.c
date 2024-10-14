#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of Array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of array: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The reverse of the array is: \n");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d, ", arr[i]);
    }

    printf("\n");

    return 0;
}