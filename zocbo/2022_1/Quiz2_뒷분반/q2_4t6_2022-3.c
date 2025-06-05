#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size){
    int i;
    for(i=0; i<size; i++) printf("%d ", arr[i]);
}

int* duplicate_array(int *arr, int size) {
    int new_size = size * 2;
    int *new_arr = malloc(new_size * sizeof(int));
    if (new_arr == NULL) {
        exit(EXIT_FAILURE); // 이건 안써도 될듯?
    }
    for (int i = 0; i < size; i++) {
        new_arr[2 * i] = arr[i];
        new_arr[2 * i + 1] = arr[i];
    }
    return new_arr;
}

int main(void) {
    int x[5] = { 1, 3, 5, 7, 9 };
    printf("x Array: [ ");
    print_array(x,5);
    printf("]\n\n");
    
    int *y = duplicate_array(x, 5);
    printf("y Array: [ ");
    print_array(y, 10);
    printf("]\n");
    free(y);
}