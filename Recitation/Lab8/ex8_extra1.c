#include <stdio.h>

int main()
{
    int arr[10];
    int min, max;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}