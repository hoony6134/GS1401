#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("The number %d is ", n);

    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }

    if (s % 3 != 0)
        printf("not ");

    printf("divisible by 3");

    return 0;
}