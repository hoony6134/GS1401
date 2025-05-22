#include <stdio.h>

int main() {
    printf("Enter the num: ");

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) { //0 1 2 3 4
        for (int j = 0; j < n - 1 - i; ++j) //4 3 2 1 0
            printf(" ");
        for (int j = 0; j < i + 1; ++j) //1 2 3 4 5
            printf("*");
        printf("\n");
    }

    return 0;
}