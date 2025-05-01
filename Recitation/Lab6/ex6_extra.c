#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double D, r1, r2;

    printf("Enter a: ");
    if (scanf("%lf", &a) != 1)
    {
        fprintf(stderr, "Invalid input for a\n");
        return 1;
    }
    printf("Enter b: ");
    if (scanf("%lf", &b) != 1)
    {
        fprintf(stderr, "Invalid input for b\n");
        return 1;
    }
    printf("Enter c: ");
    if (scanf("%lf", &c) != 1)
    {
        fprintf(stderr, "Invalid input for c\n");
        return 1;
    }

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Root 1: %.2f\n", r1);
        printf("Root 2: %.2f\n", r2);
    }
    else if (D == 0)
    {
        r1 = -b / (2 * a);
        printf("Double root: %.2f\n", r1);
    }
    else
    {
        printf("No real roots exist.\n");
    }

    return 0;
}