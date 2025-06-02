#include <stdio.h>

int main() {
    int i,j;
    int A[2][3], B[2][3];
    printf("Enter elements of matrix A (2x3): \n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B (2x3): \n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nSum of matrices A and B: \n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%4d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}