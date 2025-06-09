#include <stdio.h>
int main(void)
{
    int arr[5][5];
    printf("Please enter 5 x 5 integers in row-major order : ");
    int i, j, r, tot = 0;
    for (i = 0; i < 5; i++) for (j = 0; j < 5; j++) scanf("%d", &arr[i][j]);
    for (i = 0; i < 5; i++) for (j = 0; j < 5; j++) if (i == j) arr[i][j] += 5;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Please enter a row r : ");
    scanf("%d", &r);
    for (j = 0; j < 5; j++)
        tot += arr[r][j];
    printf("The row total of row %d is %d", r, tot);
}