#include <stdio.h>

void find_SumPrime(int a, int b) {
    int s = 0;

    for (int i = a; i <= b; ++i) {
        int is_prime = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            s += i;
            printf("%d ", i);
        }
    }

    printf("\nSum of prime numbers between %d and %d is %d", a, b, s);
}

int main() {
    int a, b;
    printf("Enter two integers a and b(2 <= a < b <= 1000): ");
    scanf("%d %d", &a, &b);

    find_SumPrime(a, b);

    return 0;
}