#include <stdio.h>

void array_add(int a[], int b[], int c[], int size) {
    int i;
    for (i=0;i<size;i++) c[i] = a[i] + b[i];
}

void array_print(int *a, int size){
    int i;
    for (i=0;i<size;i++) printf("%d ",a[i]);
}

int main(void) {
    int A[10], B[10], C[10], i;
    printf("Enter the array A(base salary): ");
    for(i=0;i<10;i++) scanf("%d",&A[i]);
    printf("Enter the array B(bonuses): ");
    for(i=0;i<10;i++) scanf("%d",&B[i]);
    printf("\n\n[Result]\n");
    printf("Array A(base salary): ");
    array_print(A,10);
    printf("\nArray B(bonuses): ");
    array_print(B,10);
    printf("\nArray C(total monthly salary): ");
    array_add(A,B,C,10);
    array_print(C,10);
}