#include <stdio.h>

int main(void)
{
    int n, i = 1, b1 = -1, b2 = -1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d: ", n);
    while (i <= n)
    {
        if (b1 == -1)
        { // 맨 처음
            b1 = 1;
            printf("%d ", i);
            continue;
        }
        else if (b2 == -1)
        { // 두 번째
            b2 = 1;
            printf("%d ", i);
            continue;
        }
        else
        {
            b2 = b1;
            b1 = i;
            i = b1 + b2;
            if (i <= n)
                printf("%d ", i);
        }
    }
}