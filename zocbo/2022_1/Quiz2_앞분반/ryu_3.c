#include <stdio.h>
#include <limits.h>

void show_arr(int ar[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", ar[i]);
}

int max_min_diff(int ar[], int n) {
    int max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }

    int diff = max - min;
    return diff < 0 ? -diff : diff;
}

int main() {
    int arr[10];
    printf("Enter 10 integer numbers: ");

    for (int i = 0; i < 10; ++i)
        scanf("%d", arr + i);

    printf("\nInput integer array: ");
    show_arr(arr, 10);
    printf("\nMax - Min difference : %d\n", max_min_diff(arr, 10));

    return 0;
}
