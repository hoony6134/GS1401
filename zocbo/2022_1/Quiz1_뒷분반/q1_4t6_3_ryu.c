#include <stdio.h>

int main() {
    printf("Input an integer: ");

    int n;
    scanf("%d", &n);

    printf("The number in reverse order is : ");

    while (n > 0) {
        printf("%d", n % 10);
        n /= 10;
    }

    return 0;
}