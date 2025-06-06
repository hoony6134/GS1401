#include <stdio.h>

void array_add(int a[], int b[], int c[], int size) {
    for (int i = 0; i < size; ++i)
        c[i] = a[i] + b[i];
}

void array_print(int *a, int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int A[10], B[10], C[10];

    printf("Enter the array A(base salary): ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", A + i);

    printf("Enter the array B(bonuses): ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", B + i);

    array_add(A, B, C, 10);

    printf("\n[Result]\n");
    printf("Array A(base salary): ");
    array_print(A, 10);
    printf("Array B(bonuses): ");
    array_print(B, 10);
    printf("Array C(total monthly salary): ");
    array_print(C, 10);

    return 0;
}
