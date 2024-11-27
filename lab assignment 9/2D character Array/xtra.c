#include <stdio.h>
#include <string.h>

int main()
{
    char words[3][50];

    printf("Enter 3 words: \n");
    for (int i = 0; i < 3; i++)
    {
        fgets(words[i], 50, stdin);
    }

    printf("Entered Words are: \n");
    for (int i = 0; i < 3; i++)
    {
        fputs(words[i], stdout);
        // fputs("\n", stdout);
    }

    return 0;
}