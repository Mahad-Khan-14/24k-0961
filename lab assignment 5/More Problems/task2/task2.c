#include <stdio.h>
int main()
{
    int Atds, Assign_score, exam_rslts;
    float FinalMarks;

    printf("Enter your Attendance: ");
    scanf("%d", &Atds);
    printf("Enter your Assignment Score: ");
    scanf("%d", &Assign_score);
    printf("Enter your Exam Results: ");
    scanf("%d", &exam_rslts);

    FinalMarks = (Atds * 0.1) + (Assign_score * 0.4) + (exam_rslts * 0.5);

    if (FinalMarks >= 95)
    {
        printf("Final marks = %.2f,\n Grade: A+", FinalMarks);
    }
    else if (FinalMarks >= 90)
    {
        printf("Final marks = %.2f,\n Grade: A", FinalMarks);
    }
    else if (FinalMarks >= 85)
    {
        printf("Final marks = %.2f,\n Grade: A-", FinalMarks);
    }
    else if (FinalMarks >= 80)
    {
        printf("Final marks = %.2f,\n Grade: B+", FinalMarks);
    }
    else if (FinalMarks >= 75)
    {
        printf("Final marks = %.2f,\n Grade: B", FinalMarks);
    }
    else if (FinalMarks >= 70)
    {
        printf("Final marks = %.2f,\n Grade: B-", FinalMarks);
    }
    else if (FinalMarks >= 60)
    {
        printf("Final marks = %.2f,\n Grade: C", FinalMarks);
    }
    else if (FinalMarks >= 50)
    {
        printf("Final marks = %.2f,\n Grade: D", FinalMarks);
    }
    else
    {
        printf("Final marks = %.2f,\n Grade: F", FinalMarks);
    }

    return 0;
}

// Create a program that calculates the final grade of a student based on multiple criteria,
// including attendance, assignment scores, and exam results, using nested decision structures.
