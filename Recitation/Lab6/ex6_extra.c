#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    double D = b * b - 4 * a * c;
    if (D > 0) {
        double r1 = (-b + sqrt(D)) / (2 * a);
        double r2 = (-b - sqrt(D)) / (2 * a);
        printf("Root 1: %.2f\n", r1);
        printf("Root 2: %.2f\n", r2);
    } else if (D == 0) {
        double r = -b / (2 * a);
        printf("Double root: %.2f\n", r);
    } else {
        printf("No real roots exist.\n");
    }

    return 0;
}