#include <stdio.h>

int isPrime(int n) // 나쁘지 않아서 기억해두면 괜찮을듯
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void find_SumPrime(int a, int b)
{
    int sum = 0, i;
    for (i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of prime numbers between %d and %d is %d\n", a, b, sum);
}

int main(void)
{
    int a, b;
    printf("Enter two integers a and b(2 <=a < b <=1000): ");
    scanf("%d %d", &a, &b);
    find_SumPrime(a,b);
}