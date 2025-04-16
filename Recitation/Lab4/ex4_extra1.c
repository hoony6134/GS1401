#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number between 0 and 9: ");
        scanf("%d", &n);
        if (n < 0 || n > 9)
        {
            printf("Your number is not in the range 0 to 9! Try again.\n");
        }
    } while (n < 0 || n > 9);
    printf("You entered: %d\n", n);
    return 0;
}