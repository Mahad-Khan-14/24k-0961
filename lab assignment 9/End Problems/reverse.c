#include <stdio.h>
#include <string.h>

// First way
void reversedStringTemp(char str[])
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Second way
void reversedString(char str[])
{
    int length = strlen(str);
    char reversed[length + 1];
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
    strcpy(str, reversed);
}

int main()
{
    char str[100];
    printf("Enter a String: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reversedString(str);
    printf("Reversed string: \n");
    printf("%s\n", str);

    return 0;
}