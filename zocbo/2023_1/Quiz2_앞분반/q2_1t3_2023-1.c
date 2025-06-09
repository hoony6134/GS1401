#include <stdio.h>

void array_copy(int a[], int b[], int size)
{
    int i;
    for (i = 0; i < size; i++) b[i]=a[i];
}

void array_print(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
}

int main(void)
{
    int A[10], B[10], i;
    printf("Enter the array A : ");
    for (i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    printf("\n[Result]\nArray A: ");
    array_print(A,10);
    array_copy(A,B,10);
    printf("\nArray B: ");
    array_print(B,10);
}