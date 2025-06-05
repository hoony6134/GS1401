#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int n, m, sum = 0;
    float avg;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    arr = (int *)malloc(n * m * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    printf("Enter %d integers: \n", n * m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i * m + j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i * m + j];
        }
    }
    avg = (float)sum / (n * m);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    free(arr);
    return 0;
}