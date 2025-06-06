#include <stdio.h>

int main() {
    int arr[5][5];

    printf("Please enter 5 x 5 integers in row-major order : ");
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            scanf("%d", *(arr + i) + j);

    for (int i = 0; i < 5; ++i)
        arr[i][i] += 5;

    printf("The resulting array is\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    int r;
    printf("Please enter a row r : ");
    scanf("%d", &r);

    int sum = 0;
    for (int j = 0; j < 5; ++j)
        sum += arr[r][j];
    printf("The row total of row %d is %d\n", r, sum);

    return 0;
}
