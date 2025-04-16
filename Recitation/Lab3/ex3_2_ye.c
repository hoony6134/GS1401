#include <stdio.h>
int main() {
    int num, a;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num==0) {
        printf("Reversed number: 0");
    } else {
        if (num<0) {
            printf("Reversed number: -");
            num = -num;
        } else {
            printf("Reversed number: ");
        }

        while(num != 0) {
            a = num%10;
            printf("%d", a);
            num = num/10;
        }
    }
    return 0;
}