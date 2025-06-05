#include <stdio.h>
#define ROWS 3
#define COLS 5

double mean(int rows, int cols, double ar[ROWS][COLS])
{
    int i, j;
    double sum = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            sum += ar[i][j];
    }
    return sum / (rows * cols);
}

double largest(int rows, int cols, double ar[ROWS][COLS])
{
    int i, j;
    double l = -1000000;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            if (ar[i][j] >= l)
                l = ar[i][j];
    }
    return l;
}

void display(int rows, int cols, double ar[ROWS][COLS])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%5.2f ", ar[i][j]);
        printf("\n");
    }
}

int main(void)
{
    double arr[ROWS][COLS];
    int i, j;
    printf("Enter 15 double values : ");
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%lf", &arr[i][j]);
    printf("Array contents: \n");
    display(ROWS, COLS, arr);
    printf("\nAverage value of all values = %.2f\n\nLargest value = %.2f", mean(ROWS, COLS, arr), largest(ROWS, COLS, arr));
}