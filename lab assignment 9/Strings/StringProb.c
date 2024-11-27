#include <stdio.h>
#include <string.h>
int main()
{

    int len;
    printf("Enter the size of strings: \n");
    scanf("%d", &len);

    char src[len];
    printf("Enter src string: \n");
    scanf("%s", src);

    char dest[len + len];
    printf("Enter dest string: \n");
    scanf("%s", dest);

    int n;
    printf("Enter the no. of characters that you want to append in dest from src: \n");
    scanf("%d", &n);

    if (strlen(dest) + len >= sizeof(dest))
    {
        printf("Not ennough space to append src to dest");
    }
    else
    {
        strncat(dest, src, n);
        printf("The new string is: %s\n", dest);
    }

    return 0;
}
