#include <stdio.h>

#define PI 3.14159265358979323846

double getDiameter(double radius) {
    return 2 * radius;
}

double getCircumference(double radius) {
    return 2 * PI * radius;
}

double getArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    diameter = getDiameter(radius);
    circumference = getCircumference(radius);
    area = getArea(radius);

    printf("Diameter = %.2lf units\n", diameter);
    printf("Circumference = %.2lf units\n", circumference);
    printf("Area = %.2lf sq. units\n", area);

    return 0;
}

