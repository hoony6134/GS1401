#include <stdio.h>

int main() {
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {   // 0 1 2 3 4
        for (int j = 1; j <= i + 1; ++j) // 1 2 3 4 5
            printf("%d", j);
        for (int j = n - i - 1; j > 0; --j) // 4 3 2 1 0
            printf("*");
        printf("\n");
    }

    return 0;
}