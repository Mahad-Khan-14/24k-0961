#include <stdio.h>
int main()
{
    int num;
    printf("Enter number (65536) : ");
    scanf("%d",&num);
    for (int i = 2; i <= 10; i++)
    {
        
        printf("%d, ", num);
        num = num / i;
    }
    return 0;
}

// 65536, 32768, 10922, 2730, 546, 91, 13, 1, 0,

