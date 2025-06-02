#include <stdio.h>

int main(void)
{
    int p[5];
    int d[5];
    int rate;
    int i;

    printf("Enter 5 commodity prices:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("\nDiscount rate(%%)? ");
    scanf("%d", &rate);

    for (i = 0; i < 5; i++)
    {
        d[i] = p[i] * (100 - rate) / 100;
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("price:%7d --> discounted price:%7d\n", p[i], d[i]);
    }

    return 0;
}
