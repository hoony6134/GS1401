#include <stdio.h>

int main()
{
    int arr[10], new_arr[10] = {0};
    int i, start, end, j;

    printf("Please enter 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the starting and ending position ( 1 - 10 ) to copy : ");
    scanf("%d %d", &start, &end);

    for (i = start - 1, j=0; i < end; i++, j++)
    {
        new_arr[j] = arr[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", new_arr[i]);
    }
    printf("\n");

    return 0;
}
