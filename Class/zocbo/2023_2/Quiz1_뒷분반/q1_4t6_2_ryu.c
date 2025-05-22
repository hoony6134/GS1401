#include <stdio.h>

int factorial(int n) {
    int ret = 1;
    while (n > 0)
        ret *= n--;

    return ret;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Result-> %d! = %d", n, factorial(n));

    return 0;
}