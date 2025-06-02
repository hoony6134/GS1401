#include <stdio.h>
int main(void)
{
    int N, M;
    printf("Enter dimensions (N M): ");
    if (scanf("%d %d", &N, &M) != 2)
    {
        return 1;
    }
    int arr[N][M];
    printf("Enter values:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("Max value: %d\n", max);
    printf("Positions:");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (arr[i][j] == max)
            {
                printf(" (%d, %d)", i, j);
            }
        }
    }
    printf("\n");
    return 0;
}