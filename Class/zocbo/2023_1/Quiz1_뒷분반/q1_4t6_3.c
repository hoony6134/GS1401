#include <stdio.h>

int digitSum(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main(void)
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int r = n;
    while (digitSum(n) >= 10)
    {
        if (digitSum(n) % 3 == 0)
        {
            n = digitSum(n);
        }
        else
            break;
    }
    if (digitSum(n) % 3 == 0)
    {
        printf("The number %d is divisible by 3", r);
    }
    else
        printf("The number %d is not divisible by 3", r);
}