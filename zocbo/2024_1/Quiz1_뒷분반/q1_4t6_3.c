#include <stdio.h>

int countDivisors(int n)
{
    int i, cnt = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            cnt++;
    return cnt;
}

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Number of divisors of %d: %d", n, countDivisors(n));
}