#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[100];
    char author[100];
    int publicationYear;
};

struct Library
{
    struct Book *books;
    int numBooks;
};

int main()
{
    struct Library library;
    library.numBooks = 5;

    // Dynamically allocate memory for books
    library.books = (struct Book *)malloc(library.numBooks * sizeof(struct Book));

    if (library.books == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details of 5 books
    printf("Enter details for %d books:\n", library.numBooks);
    for (int i = 0; i < library.numBooks; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Title: ");
        getchar();
        fgets(library.books[i].title, 100, stdin);
        printf("Author: ");
        fgets(library.books[i].author, 100, stdin);
        printf("Publication Year: ");
        scanf("%d", &library.books[i].publicationYear);
    }

    // Display titles of books published after the year 2000
    printf("\nBooks published after the year 2000:\n");
    for (int i = 0; i < library.numBooks; i++)
    {
        if (library.books[i].publicationYear > 2000)
        {
            printf("- %s", library.books[i].title);
        }
    }

    // Free the dynamically allocated memory
    free(library.books);

    return 0;
}
