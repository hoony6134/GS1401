#include <stdio.h>
#define ROWS 3
#define COLS 5

void times2(int ar[][COLS], int r) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < COLS; ++j)
            ar[i][j] *= 2;
}
void showarr2(int ar[][COLS], int r) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < COLS; ++j)
            printf("%3d", ar[i][j]);
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        { 1, 9, 9, 7, 7 },
        { 4, 9, 9, 7, 8 },
        { 5, 0, 8, 8, 9 }
    };
    showarr2(arr, ROWS);

    printf("\n");

    times2(arr, ROWS);
    showarr2(arr, ROWS);

    return 0;
}
