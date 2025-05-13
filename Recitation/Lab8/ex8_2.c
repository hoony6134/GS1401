#include <stdio.h>

int gcd_r(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_r(b, a % b);
}

int main()
{
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("gcd = %d\n", gcd_r(a, b));
    return 0;
}
