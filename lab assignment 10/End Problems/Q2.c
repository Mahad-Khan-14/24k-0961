#include <stdio.h>
#include <math.h>

struct Point
{
    double x;
    double y;
};

// Function to calculate the distance between two points.
double calculateDistance(struct Point p1, struct Point p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Function to check if a point lies within a rectangular boundary.
int isWithinRectangle(struct Point point, struct Point topLeft, struct Point bottomRight)
{
    if (point.x >= topLeft.x && point.x <= bottomRight.x &&
        point.y <= topLeft.y && point.y >= bottomRight.y)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct Point p1, p2, testPoint, topLeft, bottomRight;

    // Input two points to calculate distance.
    printf("Enter coordinates of first point (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    // Calculate and display distance.
    double distance = calculateDistance(p1, p2);
    printf("Distance between the two points: %.2f\n", distance);

    // Input rectangle boundary and a test point.
    printf("\nEnter coordinates of top-left corner of rectangle (x y): ");
    scanf("%lf %lf", &topLeft.x, &topLeft.y);

    printf("Enter coordinates of bottom-right corner of rectangle (x y): ");
    scanf("%lf %lf", &bottomRight.x, &bottomRight.y);

    printf("Enter coordinates of the point to check (x y): ");
    scanf("%lf %lf", &testPoint.x, &testPoint.y);

    // Check if the point is within the rectangle.
    if (isWithinRectangle(testPoint, topLeft, bottomRight))
    {
        printf("The point (%.2f, %.2f) lies within the rectangle.\n", testPoint.x, testPoint.y);
    }
    else
    {
        printf("The point (%.2f, %.2f) does not lie within the rectangle.\n", testPoint.x, testPoint.y);
    }

    return 0;
}
