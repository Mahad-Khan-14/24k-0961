#include <stdio.h>
#include <string.h>

#define MAX_WORDS 5
#define MAX_LENGTH 20

char toLowerMan(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    return ch;
}

int isPalindrome(char word[])
{
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++)
    {
        if (toLowerMan(word[i]) != toLowerMan(word[length - i - 1]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char words[MAX_WORDS][MAX_LENGTH];
    printf("Enter %d Words of %d Characters at MAX: \n", MAX_WORDS, MAX_LENGTH - 1);
    for (int i = 0; i < MAX_WORDS; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    printf("\nResult: \n");
    for (int i = 0; i < MAX_WORDS; i++)
    {
        if (isPalindrome(words[i]))
        {
            printf("%s is a Palindrome\n", words[i]);
        }
        else
        {
            printf("%s is not a Palindrome\n", words[i]);
        }
    }

    return 0;
}