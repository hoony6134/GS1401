#include <stdio.h>

int main(void)
{
    int money, k50 = 0, k10 = 0, k5 = 0, k1 = 0;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &money);
    if (money % 1000 != 0)
    {
        printf("Withdrawal not possible: Please enter a multiple of 1,000.");
    }
    else
    {
        if (money >= 50000)
        {
            k50 = money / 50000;
            money %= 50000;
        }
        if (money >= 10000)
        {
            k10 = money / 10000;
            money %= 10000;
        }
        if (money >= 5000)
        {
            k5 = money / 5000;
            money %= 5000;
        }
        k1 = money / 1000;
        printf("Withdrawal details: \n50000 won: %d\n10000 won: %d\n5000 won: %d\n1000 won: %d", k50, k10, k5, k1);
    }
}