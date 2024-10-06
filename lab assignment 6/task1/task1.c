
/*
    both while-do and do-while loops are good for this type of functionality,
    below given code justify it. IT usually depends if one want to print the output atleast once or first check the condition, in the demand of this type of condition ; do-while is better.
    I am justifying by writing a do-while code which will atleast run once before checking the condition.
 */

#include <stdio.h>
int main()
{
    int value, sum = 0;

    do
    {
        printf("Enter a value: ");
        scanf("%d", &value);
        sum = sum + value;
        printf("Current Sum : %d\n", sum);

    } while (value != 0);
    printf("Sum : %d\n", sum);

    return 0;
}