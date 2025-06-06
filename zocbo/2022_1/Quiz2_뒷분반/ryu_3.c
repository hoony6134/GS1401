#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size) {
    printf("[ ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("]\n");
}

int* duplicate_array(int *arr, int size) {
    int* new_arr = malloc(sizeof(int) * size * 2);

    for (int i = 0; i < size * 2; ++i)
        new_arr[i] = arr[i / 2];

    return new_arr;
}

int main() {
    int x[5] = { 1, 3, 5, 7, 9 };
    int *y = duplicate_array(x, 5);

    printf("x Array: ");
    print_array(x, 5);

    printf("\ny Array: ");
    print_array(y, 10);

    return 0;
}
