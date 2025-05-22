#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter a number between 0 and 9: ");
        scanf("%d", &n);
    } while (n < 0 || n > 9);
}