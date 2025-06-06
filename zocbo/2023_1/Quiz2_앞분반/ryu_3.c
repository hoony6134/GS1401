#include <stdio.h>

int main() {
    int arr[5][5], sum = 0;

    printf("Enter the values for the 5x5 array:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", *(arr + i) + j);
            sum += arr[i][j];
        }
    }

    printf("\nThe average of the entire array is %.2f.\n", (float)sum / 25);

    return 0;
}
