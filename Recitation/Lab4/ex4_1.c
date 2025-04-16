#include <stdio.h>
int main()
{
    printf("Enter an integer: ");
    int n, i;
    scanf("%d", &n);
    printf("The prime factors of %d are ", n);

    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    return 0;
}