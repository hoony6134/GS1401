#include <stdio.h>

int main(void) {
    int n;
    int f = 0, s = 1;
    int cnt = 0;

    printf("Enter the number of Fibonacci terms to display: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 0;
    }

    printf("Fibonacci sequence: ");
    while (cnt < n) {
        if (cnt == 0) {
            printf("%d ", f);
        } else if (cnt == 1) {
            printf("%d ", s);
        } else {
            int next = f + s;
            printf("%d ", next);
            f = s;
            s = next;
        }
        cnt++;
    }
    printf("\n");
}