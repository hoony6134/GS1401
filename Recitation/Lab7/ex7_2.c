#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    double r = 1.0;
    for (int i = 1; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
double power(double x, int y)
{
    double r = 1.0;
    for (int i = 1; i <= y; i++)
    {
        r *= x;
    }
    return r;
}
int main()
{
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    double sum = 1.0;
    for (int i = 1; i < n; i++)
    {
        sum += power(x, i) / factorial(i);
    }
    printf("\nApproximated value of e^%.2f => %.10f\n", x, sum);
    printf("Actual value of e^%.2f = %.10f\n", x, pow(M_E, x));
    printf("Absolute error: %.10f\n", fabs(sum - pow(M_E, x)));
}