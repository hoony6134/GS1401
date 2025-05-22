#include <stdio.h>

int main() {
    printf("Enter integers. Enter 0 to stop entering integers : ");

    int n_even = 0;
    int s_even = 0;
    int n_odd = 0;
    int s_odd = 0;

    int x;
    while (1) {
        scanf("%d", &x);

        if (x == 0)
            break;

        if (x % 2 == 0) {
            n_even++;
            s_even += x;
        } else {
            n_odd++;
            s_odd += x;
        }
    }

    printf("\nResult\n");
    printf("Number of evens: %d average: %g\n", n_even, (double) s_even / n_even);
    printf("Number of odds: %d average: %g\n", n_odd, (double) s_odd / n_odd);

    return 0;
}