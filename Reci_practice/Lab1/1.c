#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %d\nRemainder %d", a + b, a - b, a * b, a / b, a % b);
}