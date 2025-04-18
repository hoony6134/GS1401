#include <stdio.h>

int main() {
    int n = 0;
    int s = 0;

    int x;
    while (n < 3) {
        printf("Enter a number: ");
        scanf("%d", &x);

        if (x > 0) {
            s += x;
            n++;
        }
    }

    printf("\nTotal is %d.", s);

    return 0;
}