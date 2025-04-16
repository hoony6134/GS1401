#include <stdio.h>

int main(void)
{
    long int n, r = 0;
    printf("Input an integer: ");
    scanf("%ld", &n);
    while (n != 0)
    {
        r *= 10;
        r += n % 10;
        n /= 10;
        // printf("%ld\n", n);
    }
    printf("%ld\n", r);
}