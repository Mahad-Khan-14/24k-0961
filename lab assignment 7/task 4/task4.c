#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements of the Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int repeat[n];

    for (int i = 0; i < n; i++)
    {
        repeat[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        repeat[arr[i]]++;
    }

    printf("The elements occuring more than once are: \n");

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (repeat[i] > 1)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("None");
    }

    printf("\n");

    return 0;
}