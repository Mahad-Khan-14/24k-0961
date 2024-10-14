#include <stdio.h>
int main()
{
    int size, max, min;
    printf("Enter size of array: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of array: \n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }

        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }

    printf("Max : %d\n",max);
    printf("Min : %d\n",min);

    return 0;
}