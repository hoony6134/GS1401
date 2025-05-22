#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int a = 1, b = 1;
    while (n > 2) {
        int tmp = b;
        b = a + b;
        a = tmp;

        printf("%d ", b);

        n--;
    }

    return 0;
}