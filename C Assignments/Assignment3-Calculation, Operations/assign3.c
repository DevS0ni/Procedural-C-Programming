#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
float areaOfCircle(float radius) {
    const float pi = 3.14;
    return pi * radius * radius;
}

// Function to calculate the area of a trapezoid
float areaOfTrapezoid(float a, float b, float height) {
    return 0.5 * (a + b) * height;
}

// Function to calculate the total surface area of a cone
float totalSurfaceAreaOfCone(float radius, float slant) {
    const float pi = 3.14;
    return pi * radius * (radius + slant);
}

// Function to calculate the volume of a spherical cap
float volumeOfSphericalCap(float radius, float radiusBase, float height) {
    const float pi = 3.14;
    return (pi / 6) * (3 * radiusBase * radiusBase + height * height) * height;
}

// Function to calculate the total surface area of a pyramid
float totalSurfaceAreaOfPyramid(float sideBase, float otherEdge) {
    float slant = sqrt(pow(otherEdge, 2) - pow(sideBase, 2) / 4);
    return sideBase * (2 * slant + sideBase);
}

// Function to calculate the total surface area of a rectangular parallelepiped
float totalSurfaceAreaOfParallelepiped(float edgeA, float edgeB, float edgeC) {
    return 2 * (edgeA * edgeB + edgeA * edgeC + edgeB * edgeC);
}

int main() {
    // Test data for the questions
    // Triangle
    float base1 = 5, height1 = 10;
    float base2 = 4.5, height2 = 3.5;
    float base3 = 2.5, height3 = 5;

    // Circle
    float radius1 = 5;
    float radius2 = 4.5;
    float radius3 = 2.5;

    // Trapezoid
    float a1 = 5, b1 = 5, h1 = 2.5;
    float a2 = 4.5, b2 = 1.2, h2 = 2;
    float a3 = 0.5, b3 = 2, h3 = 4;

    // Cone
    float r1 = 5, s1 = 5;
    float r2 = 4.5, s2 = 1.2;
    float r3 = 0.5, s3 = 2;

    // Spherical Cap
    float rBase1 = 5, hCap1 = 4;
    float rBase2 = 4.5, hCap2 = 1;
    float rBase3 = 0.5, hCap3 = 1;

    // Pyramid
    float sideBase1 = 5, otherEdge1 = 4;
    float sideBase2 = 4.5, otherEdge2 = 2;
    float sideBase3 = 2.5, otherEdge3 = 1;

    // Parallelepiped
    float edgeA1 = 5, edgeB1 = 4;
    float edgeA2 = 4.5, edgeB2 = 2;
    float edgeA3 = 2.5, edgeB3 = 1;

    // Calculate and print the results
    printf("1. Area of Triangle (a): %.2f\n", areaOfTriangle(base1, height1));
    printf("   Area of Triangle (b): %.2f\n", areaOfTriangle(base2, height2));
    printf("   Area of Triangle (c): %.2f\n", areaOfTriangle(base3, height3));

    printf("\n2. Area of Circle (a): %.2f\n", areaOfCircle(radius1));
    printf("   Area of Circle (b): %.2f\n", areaOfCircle(radius2));
    printf("   Area of Circle (c): %.2f\n", areaOfCircle(radius3));

    printf("\n3. Area of Trapezoid (a): %.2f\n", areaOfTrapezoid(a1, b1, h1));
    printf("   Area of Trapezoid (b): %.2f\n", areaOfTrapezoid(a2, b2, h2));
    printf("   Area of Trapezoid (c): %.2f\n", areaOfTrapezoid(a3, b3, h3));

    printf("\n4. Total Surface Area of Cone (a): %.2f\n", totalSurfaceAreaOfCone(r1, s1));
    printf("   Total Surface Area of Cone (b): %.2f\n", totalSurfaceAreaOfCone(r2, s2));
    printf("   Total Surface Area of Cone (c): %.2f\n", totalSurfaceAreaOfCone(r3, s3));

    printf("\n5. Volume of Spherical Cap (a): %.2f\n", volumeOfSphericalCap(r1, rBase1, hCap1));
    printf("   Volume of Spherical Cap (b): %.2f\n", volumeOfSphericalCap(r2, rBase2, hCap2));
    printf("   Volume of Spherical Cap (c): %.2f\n", volumeOfSphericalCap(r3, rBase3, hCap3));

    printf("\n6. Total Surface Area of Pyramid (a): %.2f\n", totalSurfaceAreaOfPyramid(sideBase1, otherEdge1));
    printf("   Total Surface Area of Pyramid (b): %.2f\n", totalSurfaceAreaOfPyramid(sideBase2, otherEdge2));
    printf("   Total Surface Area of Pyramid (c): %.2f\n", totalSurfaceAreaOfPyramid(sideBase3, otherEdge3));

    printf("\n7. Total Surface Area of Rectangular Parallelepiped (a): %.2f\n",
           totalSurfaceAreaOfParallelepiped(edgeA1, edgeB1, edgeA1));
    printf("   Total Surface Area of Rectangular Parallelepiped (b): %.2f\n",
           totalSurfaceAreaOfParallelepiped(edgeA2, edgeB2, edgeA2));
    printf("   Total Surface Area of Rectangular Parallelepiped (c): %.2f\n",
           totalSurfaceAreaOfParallelepiped(edgeA3, edgeB3, edgeA3));

    return 0;
}
