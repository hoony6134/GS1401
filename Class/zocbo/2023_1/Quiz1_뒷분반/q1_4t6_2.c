#include <stdio.h>

int main(void)
{
    int n, a = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int temp = n;
    while (temp % 10 == 0)
    {
        printf("0");
        temp /= 10;
    }
    while (n != 0)
    {
        a *= 10;
        a += n % 10;
        n /= 10;
    }
    printf("%d", a);
}