#include <stdio.h>
int main()
{
	printf("1, 2");
	int i=1,j=2;
	for(int n=1 ; n<9; n++)
	{
		int sum = i+j;
		printf(", %d",sum);
		i=j;
		j=sum;
	}
	return 0;
}