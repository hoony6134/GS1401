#include <stdio.h>

int main(void)
{
    int n;
    int arr[10];
    int even[10], odd[10];
    int i, ec = 0, oc = 0;

    printf("\n\n\nSeparate odd and even integers in separate arrays:\n");
    printf("-----------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[ec++] = arr[i];
        }
        else
        {
            odd[oc++] = arr[i];
        }
    }

    printf("\nThe Even elements are :\n");
    for (i = 0; i < ec; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nThe Odd elements are :\n");
    for (i = 0; i < oc; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}