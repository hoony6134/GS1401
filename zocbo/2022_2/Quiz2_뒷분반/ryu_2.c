#include <float.h>
#include <stdio.h>
#define ROWS 3
#define COLS 5

double mean(int rows, int cols, double ar[ROWS][COLS]) {
    double sum = 0;

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            sum += ar[i][j];

    return sum / (rows * cols);
}

double largest(int rows, int cols, double ar[ROWS][COLS]) {
    double max = DBL_MIN;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (ar[i][j] > max)
                max = ar[i][j];
        }
    }

    return max;
}

void display(int rows, int cols, double ar[ROWS][COLS]) {
    printf("Array contents:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%5.2f ", ar[i][j]);
        printf("\n");
    }
}

int main() {
    double arr[ROWS][COLS];

    printf("Enter 15 double values : ");
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            scanf("%lf", *(arr + i) + j);

    display(ROWS, COLS, arr);
    printf("\n");
    printf("Average value of all values = %.2lf\n", mean(ROWS, COLS, arr));
    printf("\n");
    printf("Largest value = %.2lf\n", largest(ROWS, COLS, arr));

    return 0;
}
