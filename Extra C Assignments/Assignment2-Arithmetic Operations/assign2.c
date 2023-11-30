#include <stdio.h>

// Function to compute the perimeter and area of a rectangle
void rectangleProperties(float height, float width) {
    float perimeter = 2 * (height + width);
    float area = height * width;

    printf("Rectangle Properties:\n");
    printf("Perimeter: %.2f inches\n", perimeter);
    printf("Area: %.2f square inches\n", area);
}

// Function to compute the perimeter and area of a circle
void circleProperties(float radius) {
    float perimeter = 2 * 3.14 * radius;
    float area = 3.14 * radius * radius;

    printf("\nCircle Properties:\n");
    printf("Perimeter: %.2f inches\n", perimeter);
    printf("Area: %.2f square inches\n", area);
}

int main() {
    // Rectangle properties
    float rectangleHeight = 7.0, rectangleWidth = 5.0;
    rectangleProperties(rectangleHeight, rectangleWidth);

    // Circle properties
    float circleRadius = 6.0;
    circleProperties(circleRadius);

    return 0;
}
