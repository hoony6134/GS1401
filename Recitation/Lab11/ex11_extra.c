#include <stdio.h>

float inn_prod(float *a, float *b, int len)
{
    float sum = 0.0f;
    for (int i = 0; i < len; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}

int main(void)
{
    const int N = 5;
    float a[N], b[N];

    printf("\nEnter a vector a: ");
    for (int i = 0; i < N; i++)
    {
        if (scanf("%f", &a[i]) != 1)
        {
            printf("Invalid input for vector a.\n");
            return 1;
        }
    }

    printf("Enter a vector b: ");
    for (int i = 0; i < N; i++)
    {
        if (scanf("%f", &b[i]) != 1)
        {
            printf("Invalid input for vector b.\n");
            return 1;
        }
    }

    float result = inn_prod(a, b, N);
    printf("\nThe inner product is %.3f\n", result);

    return 0;
}