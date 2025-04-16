#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    int i, j, k;
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    printf("\n");
    for (i=n;i>=1;i--) {
        for (j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    printf("\n");
    for (i=n;i>=1;i--) {
        for (j=1;j<=n-i;j++) printf(" ");
        for (k=1;k<=i;k++) printf("*");
        printf("\n");
    }
    printf("\n");
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++) printf(" ");
        for (k=1;k<=i;k++) printf("*");
        printf("\n");
    }
}