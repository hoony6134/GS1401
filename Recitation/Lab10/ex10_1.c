#include <stdio.h>

int main() {
    int i,j,sum=0;
    int arr[3][4];
    printf("Enter a 3x4 array of integers: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nYou entered: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            printf("%4d", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("\nTotal sum: %d", sum);
    printf("\nAverage: %.2f", (float)sum/(3*4));
    return 0;
}