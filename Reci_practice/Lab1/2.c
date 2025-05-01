#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a three-digit number: ");
    scanf("%d",&n);
    printf("Sum of digits: %d\nProduct of digits: %d\n",(n/100)+(n%100/10)+(n%100%10),(n/100)*(n%100/10)*(n%100%10));
}