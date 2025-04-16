#include <stdio.h>

int main() {
    int order, quantity, bill = 0;
    while (1) {
        printf("\n--- Cafe Menu ---\n");
        printf("1. Americano (3000 won)\n");
        printf("2. Latte      (3500 won)\n");
        printf("3. Cappuccino (4000 won)\n");
        printf("4. Finish Order and Pay\n");

        printf("Enter menu number: ");
        scanf("%d", &order);

        if (order == 4) break;

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (order) {
            case 1:
                bill += 3000 * quantity;
                break;
            case 2:
                bill += 3500 * quantity;
                break;
            case 3:
                bill += 4000 * quantity;
                break;
            default:
                printf("Invalid choice.\n");
        }

        printf("Current total: %d won\n", bill);
    }

    printf("Final total: %d won. Thank you!\n", bill);
    return 0;
}