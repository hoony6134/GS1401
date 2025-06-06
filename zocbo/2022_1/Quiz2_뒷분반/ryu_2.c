#include <stdio.h>

int main() {
    int students[5][5] = {
        { 28, 28, 26, 9, 0 },
        { 30, 27, 30, 10, 0 },
        { 25, 26, 24, 8, 0 },
        { 18, 22, 22, 5, 0 },
        { 24, 25, 30, 10, 0 }
    };

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 4; ++j)
            students[i][4] += students[i][j];

    float avg[5] = { 0, };
    for (int c = 0; c < 5; ++c) {
        int sum = 0;
        for (int r = 0; r < 5; ++r)
            sum += students[r][c];
        avg[c] = (float)sum / 5;
    }

    printf("\t\t\t mid     fin     team     att    tot\n");
    for (int i = 0; i < 5; ++i) {
        printf("student %2d:", i);
        for (int j = 0; j < 5; ++j)
            printf("\t%4d", students[i][j]);
        printf("\n");
    }

    printf("average   :");
    for (int i = 0; i < 5; ++i)
        printf("\t %4.1f", avg[i]);
    printf("\n");

    return 0;
}
