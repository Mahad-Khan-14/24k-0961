#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void ArrPrint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int ArrSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int mahad = sum(4, 14);
    printf("SUM: %d\n", mahad);

    int mad = max(4, 14);
    printf("MAX: %d\n", mad);

    int arr[] = {3, 7, 9, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The array is: ");
    ArrPrint(arr, size);

    printf("sum of Array: %d\n", ArrSum(arr, size));

    return 0;
}
