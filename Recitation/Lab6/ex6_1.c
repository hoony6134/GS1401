#include <stdio.h>

int euclid_gcd(int a, int b)
{
    int M = (a > b) ? a : b;
    int N = (a > b) ? b : a;
    int R;

    while (N != 0)
    {
        R = M % N;
        M = N;
        N = R;
    }

    return M;
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Greatest common divisor: %d\n", euclid_gcd(a, b));
    return 0;
}
