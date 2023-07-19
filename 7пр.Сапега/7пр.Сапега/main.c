#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    // Input the coordinates and radii of the first two circles
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

// Calculate the distance between the centers of the circles
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

// Determine the number of intersection points
    if (distance > r1 + r2) {
        printf("The circles do not intersect.\n");
        printf("Number of intersection points: 0\n");
    } else if (distance == r1 + r2) {
        printf("The circles touch externally.\n");
        printf("Number of intersection points: 1\n");
    } else if (distance < fabs(r1 - r2)) {
        printf("One circle is completely inside the other.\n");
        printf("Number of intersection points: 0\n");
    } else if (distance == fabs(r1 - r2)) {
        printf("One circle touches the other internally.\n");
        printf("Number of intersection points: 1\n");
    } else {
        printf("The circles intersect at two points.\n");
        printf("Number of intersection points: 2\n");
    }

    return 0;
}
