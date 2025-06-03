#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}