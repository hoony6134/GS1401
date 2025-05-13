#include <stdio.h>
#include <math.h>

double f(double x)
{
    return exp(-x) - x;
}
double g(double x)
{
    return -exp(-x) - 1;
}

int main()
{
    double x_old = -10, x_new;
    double acc = 1e-6;
    int num = 0;

    printf("Program to find the root of the function exp(-x)-x using the Newron - Raphson Method.\n");
    printf("Enter the accuracy (acc): 0.000001\n");
    do
    {
        x_new = x_old - f(x_old) / g(x_old);
        printf("iteration : %2d  =>  ", num);
        printf("x_old :%16.10f      ", x_old);
        printf("x_new :%16.10f\n", x_new);
        if (fabs(x_new - x_old) < acc)
            break;
        x_old = x_new;
        num++;
    } while (1);
    printf("The root of the function exp(-x)-x at accuracy 0.000001 is %.6f\n", x_new);
    printf("The number of iterations is %d\n", num);
}

/*
#include <math.h>
#include <stdio.h>

double abs(double value) {
    return value < 0 ? -value : value;
}

double f(double x) {
    return exp(-x) - x;
}

double g(double x) {
    return -exp(-x) - 1;
}

int main() {
    printf("Program to find the root of the function exp(-x)-x using the Newton - Raphson Method.\n");

    double acc;
    printf("Enter the accuracy (acc): ");
    scanf("%lf", &acc);

    int iter = 0;
    double x_old, x_new = -10.0;

    do {
        x_old = x_new;
        x_new = x_old - f(x_old) / g(x_old);

        printf("iteration : %2d => x_old : %15.10lf\t\tx_new : %15.10lf\n", iter++, x_old, x_new);
    } while (abs(x_new - x_old) >= acc);

    printf("The root of the function exp(-x)-x at accuracy %lf is %lf\n", acc, x_new);
    printf("The number of iterations is %d\n", iter - 1);

    return 0;
}
*/