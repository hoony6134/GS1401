#include <stdio.h>

int main(void)
{
    int n, cnt = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0)
    {
        cnt = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            cnt++;
        }
    }
    printf("Total number of digits: %d", cnt);
}