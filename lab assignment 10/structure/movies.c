#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[100];
    char genre[50];
    char director[100];
    int releaseYear;
    float rating;
};

void addMovie(struct Movie movies[], int *count)
{
    printf("\nEnter movie title: ");
    getchar();
    fgets(movies[*count].title, sizeof(movies[*count].title), stdin);
    movies[*count].title[strcspn(movies[*count].title, "\n")] = 0;

    printf("Enter genre: ");
    fgets(movies[*count].genre, sizeof(movies[*count].genre), stdin);
    movies[*count].genre[strcspn(movies[*count].genre, "\n")] = 0;

    printf("Enter director: ");
    fgets(movies[*count].director, sizeof(movies[*count].director), stdin);
    movies[*count].director[strcspn(movies[*count].director, "\n")] = 0;

    printf("Enter release year: ");
    scanf("%d", &movies[*count].releaseYear);

    printf("Enter rating (out of 10): ");
    scanf("%f", &movies[*count].rating);

    (*count)++;
    printf("\nMovie added successfully!\n");
}

void searchByGenre(struct Movie movies[], int count, char *genre)
{
    int found = 0;
    printf("\nMovies of genre '%s':\n", genre);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            printf("Title: %s | Director: %s | Year: %d | Rating: %.1f\n",
                   movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No movies found in this genre.\n");
    }
}

void displayAllMovies(struct Movie movies[], int count)
{
    printf("\nAll Movies:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Title: %s | Genre: %s | Director: %s | Year: %d | Rating: %.1f\n",
               movies[i].title, movies[i].genre, movies[i].director, movies[i].releaseYear, movies[i].rating);
    }
}

int main()
{
    struct Movie movies[100];
    int count = 0;
    int choice;
    char genre[50];

    do
    {
        printf("\n--- Movie Management System ---\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMovie(movies, &count);
            break;
        case 2:
            printf("Enter genre to search: ");
            getchar();
            fgets(genre, sizeof(genre), stdin);
            genre[strcspn(genre, "\n")] = 0;
            searchByGenre(movies, count, genre);
            break;
        case 3:
            displayAllMovies(movies, count);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
