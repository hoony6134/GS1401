#include <stdio.h>
int main(void){
    int integer;
    printf("Enter a three-digit number: ");
    scanf("%d", &integer);
    printf("Sum of digits: %d\n", (integer/100) + (integer/10%10) + (integer%10));
    printf("Product of digits: %d\n", (integer/100) * (integer/10%10) * (integer%10));
    return 0;
}