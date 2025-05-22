#include <stdio.h>
int main()
{
    int num = 5;
    int sum = 10000;
    int dep, with;

    while (num != 0)
    {
        printf("===== ATM Menu =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("0. Exit\n");
        printf("Select menu: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }
        else if (num == 1)
        {
            printf("Enter deposit amount\n\n");
            scanf("%d", &dep);
            sum += dep;
            printf("Deposit successful.\n\n");
            continue;
        }
        else if (num == 2)
        {
            printf("Enter withdraw amount: ");
            scanf("%d", &with);
            if (sum - with < 0)
            {
                printf("Insufficient funds!\n\n");
                continue;
            }
            else
            {
                sum += with;
                printf("Withdrawal successful.\n\n");
                continue;
            }
        }
        else if (num == 3)
        {
            printf("Current balance: %d\n\n", sum);
        }
    }
    printf("Goodbye!\n");
}