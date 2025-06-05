#include <stdio.h>

int max(int arr[], int size)
{
    int max_val = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }
    return max_val;
}

double avg(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main(void)
{
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maximum = max(arr, 10);
    double average = avg(arr, 10);

    printf("Maximum value in array: %d\n", maximum);
    printf("Average value in array: %.2f\n", average);

    return 0;
}