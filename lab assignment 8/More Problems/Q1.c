#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int first;
    int last;
    printf("Starting number of the sequence: ");
    scanf("%d", &first);
    printf("Ending number of the sequence: ");
    scanf("%d", &last);

    printf("\nPrime number between %d and %d are:\n\n", first, last);

    for (int n = first; n <= last; n++)
    {
        if (n < 2)
            continue;

        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++)
        {
            int a = n % i;
            if (a == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}