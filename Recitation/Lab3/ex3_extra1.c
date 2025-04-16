#include <stdio.h>

int main() {
    int n, s = 0;

    printf("Enter positive integers (enter 0 to stop): ");
    scanf("%d", &n);

    while (n != 0) {
        s += n;
        scanf("%d", &n);
    }

    printf("Sum of entered numbers: %d\n", s);

    return 0;
}