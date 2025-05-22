#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a * b % 2 == 0) {
        printf("The product is even.");
    } else {
        printf("The product is odd.");
    }
}