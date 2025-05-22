#include <stdio.h>
int main(void)
{
    int s;
    printf("Enter a month (1-12): ");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
    case 2:
    case 12:
        printf("Season: Winter");
        break;
    case 3 ... 5:
        printf("Season: Spring");
        break;
    case 6 ... 8:
        printf("Season: Summer");
        break;
    case 9 ... 11:
        printf("Season: Fall");
        break;
    default:
        printf("Invalid month!");
        break;
    }
}