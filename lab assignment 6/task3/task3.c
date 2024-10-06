#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n < 2)
	{
		printf("NOT PRIME: %d\n", n);
		return 0;
	}

	int div = 2;
	while (div < n)
	{
		int prime = n % div;

		if (prime == 0)
		{
			printf("%d IS COMPOSITE \n", n);
			return 0;
		}
		div++;

	} // end while
	printf("%d IS PRIME \n", n);
	return 0;
}