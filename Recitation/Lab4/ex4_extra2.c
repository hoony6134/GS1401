#include <stdio.h>

int main()
{
    char lastCh;
    printf("Enter an upper case character you want to print in the last row: ");
    scanf("%c", &lastCh);

    for (char ch = 'A'; ch <= lastCh; ch++)
    {
        for (char i = 'A'; i <= ch; i++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
