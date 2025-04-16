#include <stdio.h>
int main(void){
    int integer1;
    int integer2;
    int integer3;
    int integer4;
    int integer5;

    printf("Enter 1st integer\n");
    scanf("%d", &integer1);

    printf("Enter 2nd integer\n");
    scanf("%d", &integer2);

    printf("Enter 3rd integer\n");
    scanf("%d", &integer3);

    printf("Enter 4th integer\n");
    scanf("%d", &integer4);

    printf("Enter 5th integer\n");
    scanf("%d", &integer5);

    int sum;
    sum = integer1 + integer2 + integer3 + integer4 + integer5;
    int product;
    product = integer1 * integer2 * integer3 * integer4 * integer5;

    printf("Sum : %d\n", sum);
    printf("Product : %d\n", product);
}