#include <stdio.h>
#define ROWS 4
#define COLS 5

// 문제에선 triple하라 해놓곤 program output에선 double 해 놓음
  // re: ㄹㅇㅋㅋ
void triple(int ar[][COLS], int r) {
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < COLS; ++j)
            ar[i][j] *= 3;
}

void display(int ar[][COLS], int r) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < COLS; ++j)
            printf("%2d ", ar[i][j]);
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS];
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            arr[i][j] = COLS * i + j + 1;

    display(arr, ROWS);
    printf("\n");

    triple(arr, ROWS);
    display(arr, ROWS);

    return 0;
}
