#include <stdio.h>

int main(void)
{
    int arr[3][3];
    int i,j;
    printf("Enter 9 values for 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (j = 0; j < 3; j++) {
        sum += arr[0][j];
    }

    int s;
    int verdict = 1;

    for (i = 1; i < 3 && verdict; i++) {
        s = 0;
        for (j = 0; j < 3; j++) {
            s += arr[i][j];
        }
        if (s != sum) {
            verdict = 0;
        }
    }

    for (j = 0; j < 3 && verdict; j++) {
        s = 0;
        for (i = 0; i < 3; i++) {
            s += arr[i][j];
        }
        if (s != sum) {
            verdict = 0;
        }
    }

    if (verdict) {
        s = arr[0][0] + arr[1][1] + arr[2][2];
        if (s != sum) {
            verdict = 0;
        }
    }

    if (verdict) {
        s = arr[0][2] + arr[1][1] + arr[2][0];
        if (s != sum) {
            verdict = 0;
        }
    }

    if (verdict) {
        printf("Magic Square\n");
    } else {
        printf("Not a Magic Square\n");
    }

    return 0;
}