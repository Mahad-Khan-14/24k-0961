#include <stdio.h>
#include <stdlib.h>

// A Structure for students Details
struct Student
{
    char name[50];
    int marks;
};

int main()
{
    int n, i;
    float average = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        average += students[i].marks;
    }

    // Calculate average marks
    average /= n;

    printf("\nAverage Marks: %.2f\n", average);

    // Free allocated memory
    free(students);

    return 0;
}
