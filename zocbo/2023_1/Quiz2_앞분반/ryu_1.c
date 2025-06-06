#include <stdio.h>

void array_copy(int a[], int b[], int size) {
    for (int i = 0; i < size; ++i)
        b[i] = a[i];
}

void array_print(int a[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int A[10], B[10];

    printf("Enter the array A: ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", A + i);

    printf("\n[Result]\n");
    printf("Array A: ");
    array_print(A, 10);

    array_copy(A, B, 10);
    printf("Array B: ");
    array_print(B, 10);

    return 0;
}
