#include <stdio.h>

int main() {
    int n;
    int cnt = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        cnt = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            n /= 10;
            cnt++;
        }
    }

    printf("The number has %d digits.\n", cnt);
    return 0;
}