#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("Leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year(Normal year)");
    }
}