#include <stdio.h>
#include <string.h>
int main()
{
    char words[3][20];
    printf("Enter three words: \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", words[i]);
    }

    char wordA[20];
    printf("Enter a word to find: \n");
    scanf("%s", wordA);

    int found = 0;
    for (int i = 0; i < 3; i++)
    {
        if (strstr(words[i], wordA))
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("word: <%s> found\n", wordA);
    }
    else
    {

        printf("word: <%s> not found", wordA);
    }

    return 0;
}