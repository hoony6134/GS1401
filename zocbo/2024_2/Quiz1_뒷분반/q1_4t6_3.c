#include <stdio.h>

int isPrime(int n)
{
    int i, j, v = 1;
    if (n == 1)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            v = 0;
            break;
        }
    }
    return v;
}

int main(void)
{
    int n;
    printf("Enter a positive integer greater than 1: ");
    scanf("%d",&n);
    if (isPrime(n)) {
        printf("%d is a prime number.",n);
    } else {
        printf("%d is not a prime number.",n);
    }
}