#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n<0) n=-n;
    printf("Absolute value: %d",n);
}