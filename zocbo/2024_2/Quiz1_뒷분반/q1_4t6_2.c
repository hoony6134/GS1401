#include <stdio.h>

int main(void)
{
    int a, b, i, s = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        for (i = b; i <= a; i++)
            s += i;
    }
    else
    {
        for (i = a; i <= b; i++)
            s += i;
    }
    printf("The sum of all numbers between %d and %d is: %d", a, b, s);
}