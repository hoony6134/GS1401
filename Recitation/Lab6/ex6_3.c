#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main(void) {
    double side1, side2;
    for (int i = 0; i < 3; i++) {
        printf("Enter the sides of the triangle: ");
        scanf("%lf %lf", &side1, &side2);
        double h = hypotenuse(side1, side2);
        printf("Hypotenuse: %.1f\n\n", h);
    }
    return 0;
}