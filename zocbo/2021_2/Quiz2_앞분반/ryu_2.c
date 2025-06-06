#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%2d ", arr[i]);
    printf("\n");
}

void swap_array(int *x, int *y, int size) {
    for (int i = 0; i < size; ++i) {
        int tmp = x[i];
        x[i] = y[i];
        y[i] = tmp;
    }
}

int main() {
    int a[10], b[10];

    printf("a - Enter 10 integers: ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", a + i);

    printf("b - Enter 10 integers: ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", b + i);

    printf("\n\n<< before calling swap_array >>\n");
    printf("a: ");
    print_array(a, 10);
    printf("b: ");
    print_array(b, 10);

    swap_array(a, b, 10);

    printf("\n<< after calling swap_array >>\n");
    printf("a: ");
    print_array(a, 10);
    printf("b: ");
    print_array(b, 10);

    return 0;
}
