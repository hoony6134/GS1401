#include <stdio.h>

int main()
{
    int i;
    float num, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter n%d: ", i);
        scanf("%f", &num);

        if (num < 0)
        {
            break;
        }

        sum += num;
    }

    printf("Sum = %.2f\n", sum);
    return 0;
}