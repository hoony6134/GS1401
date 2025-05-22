#include <stdio.h>

int main() {
    for (int i = 0; i < 6; ++i) {   // 0 1 2 3 4 5
        for (int j = 0; j < 6 - i; ++j)
            printf("%d ", j + 1);
        printf("\n");
    }

    return 0;
}