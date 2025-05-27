#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pal = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            pal = 0;
            break;
        }
    }

    if (pal)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

    return 0;
}