#include <stdio.h>

int main()
{
    int n, M, i;
    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
        if (i == 0 || n > M)
        {
            M = n;
        }
    }

    printf("The maximum value is: %d\n", M);
    return 0;
}
