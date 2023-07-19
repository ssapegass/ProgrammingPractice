#include <stdio.h>
#include <math.h>

// Function to calculate the length of a vector
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    double length = sqrt(dx * dx + dy * dy);
    return length;
}

int main() {
    int x1, y1, x2, y2;
    // Input the coordinates of points from the user
    printf("Enter the coordinates of points (x1, y1, x2, y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

// Calculate the length of the vector
    double length = calculateVectorLength(x1, y1, x2, y2);

// Output the result
    printf("Length of the vector: %.6lf\n", length);

    return 0;
}
