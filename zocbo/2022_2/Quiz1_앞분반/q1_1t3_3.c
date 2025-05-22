#include <stdio.h>

int MulDigits(int n)
{
    int mul = 1;
    while (n != 0)
    {
        mul *= (n % 10);
        n /= 10;
    }
    return mul;
}

int main(void)
{
    int n;
    printf("Enter an integer between 100 and 999 : ");
    scanf("%d", &n);
    printf("The multiplication of all digits in %d is %d", n, MulDigits(n));
}