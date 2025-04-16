#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int temp = n;
    while (temp > 1) {
        factorial *= temp;
        temp--;
    }

    printf("%d! = %d\n", n, factorial);
    return 0;
}