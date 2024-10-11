
// Write a program that uses bitwise operators to perform encryption and decryption of a character.

#include <stdio.h>
int main()
{
    int character, encrypted, decrypted;
    int key;

    printf("Enter a charachter to encrypt: ");
    scanf("%c", &character);

    printf("Enter a key: ");
    scanf("%d", &key);

    encrypted = character ^ key;
    printf("Encrypted charachter: %c\n", encrypted);

    decrypted = encrypted ^ key;
    printf("decrypted charachter: %c\n", decrypted);

    return 0;
}